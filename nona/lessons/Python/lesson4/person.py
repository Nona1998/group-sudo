#!/usr/bin/python3

class Person(object):
    def __init__(self,first,last,age):
        self.first = first
        self.last = last
        self.age = age
    def __str__(self):
        return "First name: "+str(self.first)+"\nLast name: "+str(self.last)+"\nAge: "+str(self.age)
class Employee(Person):
    def __init__(self,first,last,age,staffnum):
        Person.__init__(self,first,last,age)
        self.first = first
        self.first = first
        self.last = last
        self.age = age
        self.staffnum = staffnum
    def __str__(self):
        return "First name: "+str(self.first)+"\nLast name: "+str(self.last)+"\nAge: "+str(self.age)+"\nStaff: "+str(self.staffnum)
x = Person("Marge","Simpson",36)
y = Employee("Homer","Simpson",28,"engineer")
print(x)
print()
print(y)
