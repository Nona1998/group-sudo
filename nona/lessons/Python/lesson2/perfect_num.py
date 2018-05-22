#!/usr/bin/python3

n = int(input ('Input a number: '))
def perfect(n):
    i = 1
    m = n
    while i < n:
        if n % i == 0:
            m = m - i
        i += 1
    if m == 0:
        return True
    else:
        return False
print(perfect(n))
