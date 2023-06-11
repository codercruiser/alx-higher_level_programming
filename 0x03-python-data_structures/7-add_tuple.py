#!/usr/bin/python3
def add_tuple(tuple_a=(), tuple_b=()):
    result_tuple = ()
    if len(tuple_a) < 1:
        tuple_a = tuple_a + (0, 0)
    elif len(tuple_a) < 2:
        tuple_a = tuple_a + (0,)
    if len(tuple_b) < 1:
        tuple_b = tuple_b + (0, 0)
    elif len(tuple_b) < 2:
        tuple_b = tuple_b + (0,)
    for a, b in zip(tuple_a, tuple_b):
        result_tuple = result_tuple + (a + b,)
    final_tuple = (result_tuple[0], result_tuple[1])
    return final_tuple

