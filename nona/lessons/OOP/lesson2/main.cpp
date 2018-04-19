#include <iostream>
#include "classes.cpp"

int main () {
    //Circle & Line
    float x,y,xx,yy;
    unsigned int r;
    std::cout << "Enter coordinates: " << std::endl;
    std::cout << "x = ";
    std::cin >> x;
    std::cout << "y = ";
    std::cin >> y;
    Point p1(x,y);
    std::cout << "xx = ";
    std::cin >> xx;
    std::cout << "yy = ";
    std::cin >> yy;
    Point p2(xx,yy);
    Line l(p1,p2);
    std::cout << "Enter the radius of the circle: ";
    std::cin >> r;
    Circle c(r);
    std::cout << "The surface of the circle is: " << c.getS() << std::endl;
    std::cout << "The length of the line: " << l.getLength() << std::endl;
    std::cout << "All the points in the line: " << std::endl;
    l.printXY();
    float k = y / x;
    //Rectangle & Triangle
    float x1,y1,x2,y2,x3,y3;
    std::cout << "Enter coordinate for rectangle: " << std::endl;
    std::cout << "x1 = ";
    std::cin >> x1;
    std::cout << "y1 = ";
    std::cin >> y1;
    Point p3(x1,y1);
    Rectangle rec(p1,p3);
    std::cout << "The sides of rectangle are: " << rec.sideA() << ", " << rec.sideB() << std::endl;
    std::cout << "The perimeter of rectangle is: " << rec.pRectangle() << std::endl;
    std::cout << "The surface of the rectangle is: " << rec.sRectangle() << std::endl;
    std::cout << "Enter the coordinates of the triangle: " << std::endl;
    std::cout << "x2 = ";
    std::cin >> x2;
    std::cout << "y2 = ";
    std::cin >> y2;
    Point p4(x2,y2);
    std::cout << "x3 = ";
    std::cin >> x3;
    std::cout << "y3 = ";
    std::cin >> y3;
    Point p5(x3,y3);
    Triangle t(p1,p4,p5);
    std::cout << "The sides of triangle are: " << t.sideA() << ", " << t.sideB() << ", " << t.sideC() << std::endl;
    std::cout << "The perimeter of triangle is: " << t.pTriangle() << std::endl;
    std::cout << "The surface of the triangle is: " << t.sTriangle() << std::endl;
    Point *point = &t;
    point->boo();
    point->foo();
    return 0;
}
