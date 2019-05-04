#!/usr/bin/env python3

import mido
import sys

T_MOD = 1277

ON = "note_on"
OFF = "note_off"

def note_to_freq(note):
    a = 440
    return (a / 32) * (2 ** ((note - 9) / 12))

def time_to_us(time):
    us = time * T_MOD * 1000
    return us

def get_notes(mid):
    for note in list(mid):
        if note.__class__ == mido.messages.messages.Message and note.type == (ON or OFF):
            freq = note_to_freq(note.note)
            time = time_to_us(note.time)

        if note.__class__ != mido.messages.messages.Message:
            continue
        elif note.type == ON:
            print("delayMicroseconds({});".format(int(time)))
            print("ledcWriteTone(CHANNEL, {});".format(int(freq)))
        elif note.type == OFF:
            print("delayMicroseconds({});".format(int(time)))
            print("ledcWriteTone(CHANNEL, 0);")

if len(sys.argv) != 2:
    print("Usage: %s <midi file>", sys.argv[0])
    exit(2)

FILE = sys.argv[1]
midi_file = mido.MidiFile(FILE)

get_notes(midi_file)
