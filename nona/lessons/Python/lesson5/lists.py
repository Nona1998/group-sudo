#!/usr/bin/python3

try:
    a = [1, 7, 2]
    b = [4, 2, 0]
    i = 0
    while i < len(a):
        print(a[i] / b[i])
        i += 1
except IndexError:
    print("The first list has more elements than the second!")
except ZeroDivisionError:
    print("Can't divide by zero!")
except TypeError:
    print("The elements of both lists must be integers!")
