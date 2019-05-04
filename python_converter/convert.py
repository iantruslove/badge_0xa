#!/usr/bin/env python3

import mido
import sys

T_MOD = 1277

ON = "note_on"
OFF = "note_off"

files = ["chord1", "chord2", "chord3", "bass", "deedle1", "deedle2", "extra"]

def note_to_freq(note):
    a = 440
    return (a / 32) * (2 ** ((note - 9) / 12))

def time_to_us(time):
    us = time * T_MOD * 1000
    return us

def get_notes(mid):
    ret = ""
    for note in list(mid):
        if note.__class__ == mido.messages.messages.Message and note.type in {ON, OFF}:
            freq = note_to_freq(note.note)
            time = time_to_us(note.time)

        if note.__class__ != mido.messages.messages.Message:
            continue
        elif note.type == ON:
            ret += "    delayMicroseconds({});\n".format(int(time))
            ret += "    ledcWriteTone(channel, {});\n".format(int(freq))
        elif note.type == OFF:
            ret += "    delayMicroseconds({});\n".format(int(time))
            ret += "    ledcWriteTone(channel, 0);\n"

    return ret

def make_source_file(filename):
    with open("../src/" + filename + ".cpp", "w") as f:
        f.write("#include <Arduino.h>\n")
        f.write("void " + filename + "(uint8_t channel) {\n")
        f.write(get_notes(mido.MidiFile("./" + filename + ".mid")))
        f.write("}")

    with open("../src/" + filename + ".h", "w") as f:
        f.write("void " + filename + "(uint8_t channel);\n")


if __name__ == "__main__":
    for f in files:
        make_source_file(f)
