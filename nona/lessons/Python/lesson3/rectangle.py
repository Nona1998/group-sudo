#!/usr/bin/python3

class Rectangle(object):
    def __init__(self,latitude,longitude):
        self.latitude = latitude
        self.longitude = longitude
    def area(self):
        return self.latitude * self.longitude
    def perimeter(self):
        return 2*(self.latitude + self.longitude)
x = int(input("Input first side of the rectangle: "))
y = int(input("Input the second side of the rectangle: "))
r = Rectangle(x,y)
print("The are of the rectangle is:",r.area())
print("The perimeter of the rectangle is:",r.perimeter())
