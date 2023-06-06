#!/usr/bin/python3

def fizzbuzz():
    for num in range(1, 101):
        if num % 5 == 0 and num % 3 == 0:
            result = "FizzBuzz"
        elif num % 5 == 0:
            result = "Buzz"
        elif num % 3 == 0:
            result = "Fizz"
        else:
            result = str(num)
        print("{:s}".format(result), end=" ")

