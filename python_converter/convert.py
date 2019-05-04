#!/usr/bin/env python3

import mido
import sys

T_MOD = 1277

ON = "note_on"
OFF = "note_off"
HIGH = "HIGH"
LOW = "LOW"

files = ["chord1", "chord2", "chord3", "bass", "deedle1", "deedle2", "extra"]

def note_to_freq(note):
    a = 440
    return (a / 32) * (2 ** ((note - 9) / 12))

def time_to_us(time):
    us = time * T_MOD * 1000
    return us

def get_led(freq):
    f = freq
    pin = -1
    while f > 40:
        f /= 2
        pin += 1

    if pin > 5:
        pin = 5
    if pin < 0:
        pin = 0
    return pin

def get_digi_write(freq, on_off):
    ret = ""
    pin = get_led(freq)
    if pin == 0:
        for i in range(0,6):
            ret += "    digitalWrite(output_pins[{}], {});\n".format(i, on_off)
    elif pin == 1:
        ret += "    digitalWrite(output_pins[{}], {});\n".format(0, on_off)
        ret += "    digitalWrite(output_pins[{}], {});\n".format(1, on_off)
    elif pin == 2 or pin == 3:
        ret += "    digitalWrite(output_pins[{}], {});\n".format(2, on_off)
        ret += "    digitalWrite(output_pins[{}], {});\n".format(3, on_off)
    elif pin == 4 or pin == 5:
        ret += "    digitalWrite(output_pins[{}], {});\n".format(4, on_off)
        ret += "    digitalWrite(output_pins[{}], {});\n".format(5, on_off)
    return ret

def get_notes(mid):
    ret = ""
    for note in list(mid):
        if note.__class__ == mido.messages.messages.Message and note.type in {ON, OFF}:
            freq = note_to_freq(note.note)
            time = time_to_us(note.time)

        if note.__class__ != mido.messages.messages.Message:
            continue
        elif note.type == ON:
            pin = get_led(freq)
            ret += "    delayMicroseconds({});\n".format(int(time))
            ret += get_digi_write(freq, HIGH)
            ret += "    ledcWriteTone(channel, {});\n".format(int(freq))
        elif note.type == OFF:
            pin = get_led(freq)
            ret += "    delayMicroseconds({});\n".format(int(time))
            ret += get_digi_write(freq, LOW)
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
