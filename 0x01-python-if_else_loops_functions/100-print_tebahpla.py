#!/usr/bin/python3

for num in range(122, 96, -1):
    if num % 2 == 0:
        char_code = num
    else:
        char_code = num - 32
    print("{:s}".format(chr(char_code)), end="")

