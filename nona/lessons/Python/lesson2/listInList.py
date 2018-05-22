#!/usr/bin/python3.5
l = [[1,2],[3,4],[5,6]]
i = 0
def foo(l, suml = 0):
    if type(l[0]) == type([]):
        for i in l[0]:
            suml += i
        return suml + foo(l[1:])
    else:
        return l[0] + foo(l[1:])
print (foo(l))
