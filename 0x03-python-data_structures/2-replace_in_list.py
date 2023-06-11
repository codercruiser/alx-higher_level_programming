#!/usr/bin/python3
def replace_in_list(unique_list, unique_idx, unique_element):
    if unique_idx >= 0 and unique_idx < len(unique_list):
        unique_list[unique_idx] = unique_element
    return unique_list

