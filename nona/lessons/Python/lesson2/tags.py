#!/usr/bin/python3

word = input ('Input a word: ')
tag = input ('Input a tag: ')
def add_tags(w,t):
    return '<'+t+'>'+w+'</'+t+'>'
print(add_tags(word,tag))
