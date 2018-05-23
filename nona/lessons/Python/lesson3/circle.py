#!/usr/bin/python
import math

class Circle(object):
    def __init__(self,radius):
        self.radius = radius
    def area(self):
        return math.pi * self.radius**2
    def perimeter(self):
        return 2 * math.pi * self.radius
r = int(input("Input the radius of the circle: "))
a = Circle(r)
print("The area of the circle:",a.area())
print("The perimeter of the circle:",a.perimeter())
