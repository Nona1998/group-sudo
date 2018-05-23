#!/usr/bin/python

word = input ('Type a word: ');
s = len(word);
pal = 1;
for i in word:
    if i == word[s - 1]:
        s -= 1;
    else:
        pal = 0;
        print (word, 'is not a palindrome');
        break;
if pal == 1:
    print (word,'is a palindrome');
