#!/usr/bin/python3

a = input('Input a number: ')
def sum_foo(a):
    i = 0
    summa = 0
    while i < len(a):
        summa += int(a[i])
        i += 1
    return summa
print ('The sum of numbers of', a, ': ', sum_foo(a))
