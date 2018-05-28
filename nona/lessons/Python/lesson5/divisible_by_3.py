#!/usr/bin/python3

try:
    x = int(input("Enter an integer: "))
except ValueError:
    print("The input must be an integer!")
else:
    if x % 3 == 0:
        print("Great!")
    else:
        raise TypeError("The number must be divisible by 3!")
