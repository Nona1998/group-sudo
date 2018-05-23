#!/usr/bin/python3

word = input("Type a word: ")
vowels = ["A","a","E","e","I","i","O","o","U","u"]
output = []
for w in word:
    output += [w for v in vowels if w==v]
s = ""
print ('All the vowles in this word:',s.join(output))
