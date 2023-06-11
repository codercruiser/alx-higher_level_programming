#!/usr/bin/python3
def print_matrix_integer(matrix=[[]]):
    for row in range(len(matrix)):
        col_count = 0
        for val in matrix[row]:
            print("{:d}".format(val), end="")
            if col_count < len(matrix[row]) - 1:
                print(end=" ")
            col_count += 1
        print()

