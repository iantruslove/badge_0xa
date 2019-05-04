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
        if note.__class__ == mido.messages.messages.Message and note.type == (ON or OFF):
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

with open("../src/" + files[0] + ".c", "w") as f:
    f.write("void " + files[0] + "(uint8_t channel) {\n")
    f.write(get_notes(mido.MidiFile("./chord1.mid")))
    f.write("}")

with open("../src/" + files[1] + ".c", "w") as f:
    f.write("void " + files[1] + "(uint8_t channel) {\n")
    f.write(get_notes(mido.MidiFile("./chord2.mid")))
    f.write("}")

with open("../src/" + files[2] + ".c", "w") as f:
    f.write("void " + files[2] + "(uint8_t channel) {\n")
    f.write(get_notes(mido.MidiFile("./chord3.mid")))
    f.write("}")

with open("../src/" + files[3] + ".c", "w") as f:
    f.write("void " + files[3] + "(uint8_t channel) {\n")
    f.write(get_notes(mido.MidiFile("./bass.mid")))
    f.write("}")

with open("../src/" + files[4] + ".c", "w") as f:
    f.write("void " + files[4] + "(uint8_t channel) {\n")
    f.write(get_notes(mido.MidiFile("./deedle1.mid")))
    f.write("}")

with open("../src/" + files[5] + ".c", "w") as f:
    f.write("void " + files[5] + "(uint8_t channel) {\n")
    f.write(get_notes(mido.MidiFile("./deedle2.mid")))
    f.write("}")

with open("../src/" + files[6] + ".c", "w") as f:
    f.write("void " + files[6] + "(uint8_t channel) {\n")
    f.write(get_notes(mido.MidiFile("./extra.mid")))
    f.write("}")


