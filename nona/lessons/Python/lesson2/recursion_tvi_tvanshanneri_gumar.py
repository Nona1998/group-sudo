#!/usr/bin/python3

n = int(input('Input a positive number: '))
def summa(n):
    if n != 0:
        return (n%10)+summa(n//10)
    else:
        return n
print (summa(n))
