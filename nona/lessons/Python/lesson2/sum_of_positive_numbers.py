#!/usr/bin/python3.5

n = int(input('Input a number: '))
def foo(n):
    if n != 1 and n != 0:
        return n+foo(n-2)
    else:
        return n;
print (foo(n))
