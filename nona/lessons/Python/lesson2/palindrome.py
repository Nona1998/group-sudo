#!/usr/bin/python3

word = input ('Input a word: ')
def pal(word):
    if len(word) < 1:
        return True
    else:
        if word[0] == word[-1]:
            return pal(word[1:-1])
        else:
            return False
print (pal(word))
