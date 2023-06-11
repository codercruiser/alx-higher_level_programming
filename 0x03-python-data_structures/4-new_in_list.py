#!/usr/bin/python3
def new_in_list(unique_list, unique_idx, unique_element):
    new_list = unique_list.copy()
    if unique_idx >= 0 and unique_idx < len(unique_list):
        new_list[unique_idx] = unique_element
    return new_list

