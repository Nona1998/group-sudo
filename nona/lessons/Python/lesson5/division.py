#!/usr/bin/python3

try:
    a = int(input("Enter value for a: "))
    b = int(input("Enter value for b: "))
    print("a / b =", a/b)
except ValueError:
    print("a and b must be integers!")
except:
    print("Can't divide by zero!")
