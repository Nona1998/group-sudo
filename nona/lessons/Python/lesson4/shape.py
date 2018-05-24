#!/usr/bin/python3
import math

class Shape(object):
    def __eq__(self,other):
        return self.area() == other.area() and self.circum() == other.circum()
    def __lt__(self,other):
        return (self.area() < other.area() and self.circum() < other.circum())
class Rectangle(Shape):
    def __init__(self,length,width):
        self.length = length
        self.width = width
    def __str__(self):
        return "Rectangle's circum: "+str(Rectangle.circum(self))+"\nRectangle's area: "+str(Rectangle.area(self))
    def area(self):
        return self.length * self.width
    def circum (self):
        return 2 * (self.length + self.width)
class Square(Rectangle):
    def __init__(self,side):
        Rectangle.__init__(self,side,side)
        self.side = side
    def __str__(self):
        return "This is Square. "+"The side of square is: "+str(self.side)
class Circle(Shape):
    def __init__(self,radius):
        self.radius = radius
    def circum(self):
        return math.pi * 2 * self.radius
    def area(self):
        return math.pi * self.radius ** 2
    def __lt__(self,other):
        return self.radius < other.radius or other.radius > self.radius
    def __str__(self):
        return "This is Circle. "+"The diameter of circle: "+str(2*self.radius)
square1=Square(3)
print(square1.circum())
square2 = Square(4)
print(square1 > square2)
rectangle1 = Rectangle(4,4)
print(square2 == rectangle1)
circle1 = Circle(5)
print(square1 < circle1)
print(square1)
print(square2)
print(rectangle1)
print(circle1)
