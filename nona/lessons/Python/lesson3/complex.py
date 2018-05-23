#!/usr/bin/python3
import math
class Complex(object):
    def __init__(self,a,b):
        self.a = a
        self.b = b
    def __str__(self):
        if self.a == 0 and self.b == 0:
            return '0'
        if self.a == 0:
            return '('+str(self.b)+'i)'
        if self.b == 0:
            return '('+str(self.a)+')'
        return '('+str(self.a)+'+'+str(self.b)+'i)'
    def __add__(self,other):
        x = self.a + other.a
        y = self.b + other.b
        return Complex(x,y)
    def __sub__(self,other):
        x = self.a - other.a
        y = self.b - other.b
        return Complex(x,y)
    def __mul__(self,other):
        x = self.a * other.a - self.b * other.b
        y = self.b * other.a + self.a * other.b
        return Complex(x,y)
    def __truediv__(self,other):
        x = (self.a * other.a + self.b * other.b)/(other.a**2 + other.b**2)
        y = (self.b * other.a - self.a * other.b)/(other.a**2 + other.b**2)
        return Complex(x,y)
    def __iadd__(self,other):
        self.a += other.a
        self.b += other.b
        return Complex(self.a,self.b)
    def __isub__(self,other):
        self.a -= other.a
        self.b -= other.b
        return Complex(self.a,self.b)
    def ___imul_(self,other):
        self.a *= other.a
        self.b *= other.b
        return Complex(self.a,self.b)
    def __itruedev__(self,other):
        self.a /= other.a
        self.b /= other.b
        return Complex(self.a,self.b)
    def __invert__(self):
        return Complex(self.a/(self.a**2+self.b**2),-(self.b/(self.a**2+self.b**2)))
    def __abs__(self):
        return math.sqrt(math.fabs(self.a**2 - self.b**2))
    def __eq__(self,other):
        return self.a == other.a and self.b == other.b
    def abs(modul):
        return math.sqrt(math.fabs(modul.a**2-modul.b**2))
    def __gt__(self,other):
        return self.abs() > other.abs()
    def __lt__(self,other):
        return  self.abs() < other.abs()
    def __le__(self,other):
        return  self.abs() <= other.abs()
    def __ge__(self,other):
        return  self.abs() >= other.abs()
x = int(input("Input 4 numbers: "))
y = int(input())
z = int(input())
h = int(input())
a = Complex(x,y)
b = Complex(z,h)
print("Addition:",a + b)
print("Subtraction:",a - b)
print("Division:",a / b)
print ("Multiple:",a * b)
print("Inverse:",~a)
print("Absolute value:",abs(a))
print("Equality:",a == b)
print("Greater than:",a>b)
print("Less than:",a<b)
print("Less than or equal to:",a<=b)
print("Greater than or equal to:",a>=b)
a += b
print("In-place addition:",a)
a -= b
print("In-place subtraction:",a)
a *= b
print("In-place multiplication:",a)
a /= b
print("In-place division:",a)
