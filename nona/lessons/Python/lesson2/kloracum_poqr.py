#!/usr/bin/python3

l = [1, 2.5, 4.2, 8, 0.9, 10, 0.2]
def sum2(l):
    i = 0
    s = 0
    while i < len(l):
        if isinstance(l[i], float):
            l[i] = int(l[i])
        s += l[i]
        i += 1
    return s
print ('Sum:',sum2(l))
