#!/usr/bin/python3
def element_at(unique_list, unique_idx):
    if unique_idx >= 0 and unique_idx < len(unique_list):
        return (unique_list.pop(unique_idx))
    else:
        return (None)

