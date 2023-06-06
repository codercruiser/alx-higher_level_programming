#!/usr/bin/python3

def remove_char_at(string, n):
    copy = ""
    count = 0
    for char in string:
        if count != n:
            copy += char
        count += 1
    return copy

