#!/usr/bin/python3

def print_sorted_dictionary(dictionary):
    sorted_items = sorted(dictionary.items())
    for key, value in sorted_items:
        print("{}: {}".format(key, value))

