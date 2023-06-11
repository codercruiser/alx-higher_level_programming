#!/usr/bin/python3
def print_reversed_list_integer(unique_list=[]):
    if unique_list:
        unique_list.reverse()
        for unique_item in unique_list:
            print("{:d}".format(unique_item))
    else:
        return None

