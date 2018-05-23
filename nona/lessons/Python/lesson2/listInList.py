#!/usr/bin/python3

list = [1, 2, [3, 4], [5,6,7]]
def nested_sum(lst):
    total = 0
    for i in lst:
        if (type(i) == type([])):
            total += nested_sum(i)
        else:
            total += i
    return total
print( "Sum:", nested_sum(list))
