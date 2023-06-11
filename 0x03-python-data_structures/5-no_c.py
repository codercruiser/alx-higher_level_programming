#!/usr/bin/python3
def no_c(unique_string):
    result_string = ""
    for character in unique_string:
        if character != 'c' and character != 'C':
            result_string += character
    return result_string

