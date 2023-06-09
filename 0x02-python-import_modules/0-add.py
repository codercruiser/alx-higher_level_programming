#!/usr/bin/python3

if __name__ == "__main__":
    # Importing the 'add' function from the 'add_0' module
    from add_0 import add

    # Assigning values to variables
    number1 = 1
    number2 = 2

    # Performing addition using the 'add' function and printing the result
    result = add(number1, number2)
    print("The sum of {} and {} is {}".format(number1, number2, result))

