#!/usr/bin/python3
import random

number = random.randint(-10000, 10000)

if number > 0:
    last = number % 10
else:
    last = ((number * -1) % 10) * -1

if last > 5:
    final = "and is greater than 5"
elif last == 0:
    final = "and is 0"
else:
    final = "and is less than 6 and not 0"

print("Last digit of", number, "is", last, final)

