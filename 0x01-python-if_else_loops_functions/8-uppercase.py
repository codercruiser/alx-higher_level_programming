#!/usr/bin/python3

def uppercase(text):
    for char in text:
        change = 0
        if ord(char) > 96 and ord(char) < 123:
            change = 32
        print("{:s}".format(chr(ord(char) - change)), end="")
    print()

