#include <iostream>
#include "point.cpp"

int main () {
    //Circle & Line
    Circle C(1,2,3);
    Line L(1,2,3,4);
    float x,y,xx,yy;
    unsigned int r;
    std::cout << "Enter coordinates: " << std::endl;
    std::cout << "x = ";
    std::cin >> x;
    L.setX(x);
    std::cout << "y = ";
    std::cin >> y;
    L.setY(y);
    std::cout << "xx = ";
    std::cin >> xx;
    L.setXX(xx);
    std::cout << "yy = ";
    std::cin >> yy;
    L.setYY(yy);
    std::cout << "Enter the radius of the circle: ";
    std::cin >> r;
    C.setR(r);
    std::cout << "The area of the circle is: " << C.getS() << std::endl;
    std::cout << "The length of the line: " << L.getLength() << std::endl;
    std::cout << "All the points in the line: " << std::endl;
    float k = y / x;
    for (int i = x + 1; i < xx; i++) {
        std::cout << "(" << i << ", " << k * i << ")" << std::endl;
    }
    //Rectangle & Triangle
    Rectangle R(1,2,3,4);
    Triangle T(1,2,3,4,5,6);
    float x1,y1,x3,y3,x4,y4;
    std::cout << "Enter coordinate for rectangle: " << std::endl;
    std::cout << "x1 = ";
    std::cin >> x1;
    std::cout << "y1 = ";
    std::cin >> y1;
    R.set(x1,y1);
    std::cout << "The sides of rectangle are: " << R.sideA() << ", " << R.sideB() << std::endl;
    std::cout << "The perimeter of rectangle is: " << R.pRectangle() << std::endl;
    std::cout << "The surface of the rectangle is: " << R.sRectangle() << std::endl;
    std::cout << "Enter the coordinates of the triangle: " << std::endl;
    std::cout << "x3 = ";
    std::cin >> x3;
    std::cout << "y3 = ";
    std::cin >> y3;
    std::cout << "x4 = ";
    std::cin >> x4;
    std::cout << "y4 = ";
    std::cin >> y4;
    T.set(x3,y3,x4,y4);
    std::cout << "The sides of triangle are: " << T.sideA() << ", " << T.sideB() << ", " << T.sideC() << std::endl;
    std::cout << "The perimeter of triangle is: " << T.pTriangle() << std::endl;
    std::cout << "The surface of the triangle is: " << T.sTriangle() << std::endl;
    return 0;
}
