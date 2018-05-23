#!/usr/bin/python3

colors = ["red","yellow","blue"]
things = ["house","car","tree"]
for c in colors:
    combined = [(c,t) for t in things]
print(combined)
