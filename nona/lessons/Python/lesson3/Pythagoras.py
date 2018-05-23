#!/usr/bin/python

trio = []
for i in range(1,31):
    for j in range(1,31):
        trio += [(i,j,k) for k in range(1,31) if i**2 + j**2 == k**2 and i < j]
print (trio)
