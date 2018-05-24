#!/usr/bin/python3

class Polynomial():
    def __init__(self,a,b,c):
        self.a = a
        self.b = b
        self.c = c
    def solution(self,a,b,c):
        x1 = (-self.b + (b**2 - 4*self.a*self.c)**0.5)/2*a
        x2 = (-self.b - (b**2 - 4*self.a*self.c)**0.5)/2*a
        return "x1 = "+str(x1)+"\nx2 = "+str(x2)
    def value(self,x):
        val = self.a*x*x + self.b*x + self.c
        return val
    def __add__(self,other):
        x = self.a + other.a
        y = self.b + other.b
        z = self.c + other.c
        return Polynomial(x,y,z)
    def __sub__(self,other):
        x = self.a - other.a
        y = self.b - other.b
        z = self.c - other.c
        return Polynomial(x,y,z)
    def __mul__(self,other):
        n = self.a * other.a
        m = self.a * other.b + self.b * other.a
        x = self.a * other.c + self.b * other.b + self.c * other.a
        y = self.b * other.c + self.c * other.b
        z = self.c * other.c
        return str(n)+"x^4 + "+str(m)+"x^3 + "+ str(Polynomial(x,y,z))
    def __str__(self):
        return str(self.a)+"x^2 + "+str(self.b)+"x + "+str(self.c)+" = 0"
p1 = Polynomial(2,6,17)
p2 = Polynomial(1,3,-7)
print("First polynomial:",p1)
print("Second polynomial:",p2)
print(p1.value(2))
print("Addition:",p1+p2)
print("Subtraction:",p1-p2)
print("Multiplication:",p1*p2)
