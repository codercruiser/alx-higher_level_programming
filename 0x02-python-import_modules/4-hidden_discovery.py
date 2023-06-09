#!/usr/bin/python3

import hidden_4

def main():
    module_members = dir(hidden_4)

    for member in module_members:
        if "__" not in member:
            print(member)

if __name__ == "__main__":
    main()

