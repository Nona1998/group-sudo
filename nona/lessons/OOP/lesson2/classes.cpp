#include <iostream>
#include <cmath>

class Shape {
    public:
        virtual std::string shape() = 0;
        virtual float getS() = 0;
        virtual float getP() = 0;
};

class Point: public Shape {
    protected:
        float x;
        float y;
    public:
        Point (float x = 0, float y = 0)
        {
            this->x = x;
            this->y = y;
        }
        Point (const Point &objP) 
        {
            x = objP.x;
            y = objP.y;
        }
        ~Point () {}
        void setX (float x) {
            this->x = x;
        }
        void setY (float y) {
            this->y = y;
        }
        float getX () {
            return x;
        }
        float getY () {
            return y;
        }
        void boo () {
            std::cout << "This is class Point! BOO" << std::endl;
        }
        virtual void foo () {
            std::cout << "This is class Point! FOO" << std::endl;
        }
        std::string shape () {
            return "I am Point!";
        }
        virtual float getS() {
            return getX();
        }
        virtual float getP() {
            return getY();
        }
};

class Circle: public Point {
    private:
        unsigned int r;
    public:
        Circle (unsigned int r = 0, Point objP =(0,0))
        :Point(objP)
        {
            this->r = r;
        }
        Circle (const Circle &objC)
        :Point(objC)
        {
            r = objC.r;
        }
        ~Circle () {}
        void setR (unsigned int r) {
            this->r = r;
        }
        int getR () {
            return r;
        }
        float getC () {
            return 2 * getR() * M_PI;
        }
        float getCircleS () {
            return getR() * getR() * M_PI;
        }
        std::string shape () {
            return "I am Circle!";
        }
        virtual float getS () {
            return getCircleS();
        }
        virtual float getP () {
            return getC();
        }
};

class Line: public Point {
    private:
        Point coordL;
    public:
        Line (Point coordL = (0,0), Point objP = (0,0))
        :Point(objP)
        {
            this->coordL = coordL;
        }
        Line (const Line &objL)
        :Point(objL)
        {
            coordL = objL.coordL;
        }
        ~Line () {}
        void setCoordL (Point coordL) {
            this->coordL = coordL;
        }
        Point getCoordL () {
            return coordL;
        }
        float getLength () {
            float length = sqrt(pow(coordL.getX() - getX(), 2) + pow(coordL.getY() - getY(), 2));
            return length;
        }
        void printXY () {
            float x1 = getX(), y1 = getY();
            float k = (coordL.getY() - y1) / (coordL.getX() - x1);
            float b = y1 - k * x1;
            int i, n;
            if (x1 < coordL.getX()) {
                i = x1 + 1;
                n = coordL.getX();
            } else {
                i = coordL.getX() + 1;
                n = x1;
            }
            for (i; i < n; ++i) {
                std::cout << "(" << i << ", " << k * i + b << ")" << std::endl;
            }
        }
        std::string shape () {
            return "I am Line!";
        }
        virtual float getP () {
            return getLength();
        }
};

class Rectangle: public Point {
    private:
        Point coordR;
    public:
        Rectangle (Point coordR = (0,0), Point objP = (0,0))
        :Point(objP)
        {
            this->coordR = coordR;
        }
        Rectangle (const Rectangle &objR) 
        :Point(objR)
        {
            coordR = objR.coordR;
        }
        ~Rectangle (){}
        void setCoordR (Point coordL) {
            this->coordR = coordR;
        }
        Point getCoordR () {
            return coordR;
        }
        float sideA () {
            return std::abs(coordR.getY() - getY());
        }
        float sideB () {
            return std::abs(coordR.getX() - getX());
        }
        float pRectangle () {
            return 2 * (sideA() + sideB());
        }
        float sRectangle () {
            return sideA() * sideB();
        }
        std::string shape () {
            return "I am Rectangle!";
        }
        virtual float getS () {
            return sRectangle();
        }
        virtual float getP () {
            return pRectangle();
        }
};

class Triangle: public Point {
    private:
        Point coordT1, coordT2;
    public:
        Triangle (Point coordT1 = (0,0), Point coordT2 = (0,0), Point objP = (0,0))
        :Point(objP)
        {
            this->coordT1 = coordT1;
            this->coordT2 = coordT2;
        }
        Triangle (const Triangle &objT)
        :Point(objT)
        {
            coordT1 = objT.coordT1;
            coordT2 = objT.coordT2;
        }
        ~Triangle () {}
        void setCoordT1 (Point coordT1) {
            this->coordT1 = coordT1;
        }
        void setCoordT2 (Point coordT2) {
            this->coordT2 = coordT2;
        }
        Point getCoordT1() {
            return coordT1;
        }
        Point getCoordT2() {
            return coordT2;
        }
        float sideA () {
            return sqrt(pow(coordT1.getX() - getX(), 2) + pow(coordT1.getY() - getY(), 2));
        }
        float sideB () {
            return sqrt(pow(coordT2.getX() - getX(), 2) + pow(coordT2.getY() - getY(), 2));
        }
        float sideC () {
            return sqrt(pow(coordT1.getX() - coordT2.getX(), 2) + pow(coordT1.getY() - coordT2.getY(), 2));
        }
        float pTriangle () {
            return sideA() + sideB() + sideC();
        }
        float pTriangleHalf () {
            return pTriangle() / 2;
        }
        float sTriangle () {
            return sqrt(pTriangleHalf() * (pTriangleHalf() - sideA()) * (pTriangleHalf() - sideB()) * (pTriangleHalf() - sideC()));
        }
        void boo () {
            std::cout << "This is class Triangle! BOO" << std::endl;
        }
        void foo () {
            std::cout << "This is class Triangle! FOO" << std::endl;
        }
        std::string shape () {
            return "I am Triangle!";
        }
        virtual float getS () {
            return  sTriangle();
        }
        virtual float getP () {
            return  pTriangle();
        }
};
