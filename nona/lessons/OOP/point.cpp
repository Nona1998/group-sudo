#include <iostream>
#include <cmath>

class Point {
    protected:
        float x;
        float y;
    public:
        Point (float x = 0, float y = 0)
        {
            this->x = x;
            this->y = y;
        }
	Point (const Point &obj) 
	{
	    x = obj.x;
	    y = obj.y;
	}
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
	void foo () {
	    std::cout << "This is class Point! FOO" << std::endl;
	}
        ~Point () {
        }
};

class Circle: public Point {
    private:
        unsigned int r;
    public:
        Circle (unsigned int r = 0, float x = 0, float y = 0)
        :Point(x,y)
        {
            this->r = r;
        }
	Circle (const Circle &obj) 
	:Point(x,y)
	{
	    r = obj.r;
	}
        void setR (unsigned int r) {
            this->r = r;
        }
        int getR () {
            return r;
        }
        float getS () {
            return getR() * getR() * M_PI;
        }
        ~Circle () {
        }
};

class Line: public Point {
    private:
        float xx;
        float yy;
    public:
        Line (float xx = 0, float yy = 0,float x = 0, float y = 0) 
        :Point(x,y)
        {
            this->xx = xx;
            this->yy = yy;
        }
	Line (const Line &obj) 
	:Point(x,y)
	{
	    xx = obj.xx;
	    yy = obj.yy;
	}
        void setXX (float xx) {
            this->xx = xx;
        }
        void setYY (float yy) {
            this->yy = yy;
        }
        float getXX () {
            return xx;
        }
        float getYY () {
            return yy;
        }
        float getLength () {
            float length = sqrt(pow(getXX() - getX(), 2) + pow(getYY() - getY(), 2));
            return length;
        }
	void printXY () {
	    float x1 = getX(), y1 = getY();
	    float k = (yy - y1) / (xx - x1);
	    float b = y1 - k * x1;
	    int i, n;
	    if (x1 < xx) {
		i = x1 + 1;
		n = xx;
	    } else {
		i = xx + 1;
	        n = x1;
	    }
	    for (i; i < n; ++i) {
		std::cout << "(" << i << ", " << k * i + b << ")" << std::endl;
	    }
	}
        ~Line () {
        }
};

class Rectangle: public Point {
    private:
        float x1;
        float y1;
    public:
        Rectangle (float x1 = 0, float y1 = 0, float x = 0, float y = 0)
        :Point(x, y)
        {
            this->x1 = x1;
            this->y1 = y1;
        }
	Rectangle (const Rectangle &obj) 
	:Point(x,y)
	{
	    x1 = obj.x1;
	    y1 = obj.y1;
	}
        void set (float x1, float y1) {
            this->x1 = x1;
            this->y1 = y1;
        }
        float getX1 () {
            return x1;
        }
        float getY1 () {
            return y1;
        }
        float sideA () {
            return std::abs(getY1() - getY());
        }
        float sideB () {
            return std::abs(getX1() - getX());
        }
        float pRectangle () {
            return 2 * (sideA() + sideB());
        }
        float sRectangle () {
            return sideA() * sideB();
        }
        ~Rectangle ()
        {
        }
};

class Triangle: public Point {
    private:
        float x3;
        float y3;
        float x4;
        float y4;
    public:
        Triangle (float x3 = 0,float y3 = 0, float x4 = 0, float y4 = 0, float x = 0, float y = 0) 
        :Point(x, y)
        {
            this->x3 = x3;
            this->y3 = y3;
            this->x4 = x4;
            this->y4 = y4;
        }
	Triangle (const Triangle &obj) 
	:Point(x,y)
	{
	    x3 = obj.x3;
	    y3 = obj.y3;
	    x4 = obj.x4;
	    y4 = obj.y4;
	}
        void set (float x3,float y3, float x4, float y4) {
            this->x3 = x3;
            this->y3 = y3;
            this->x4 = x4;
            this->y4 = y4;
        }
        float getX3() {
            return x3;
        }
        float getY3() {
            return y3;
        }
        float getX4() {
            return x4;
        }
        float getY4() {
            return y4;
        }
        float sideA () {
            return sqrt(pow(getX4() - getX(), 2) + pow(getY4() - getY(), 2));
        }
        float sideB () {
            return sqrt(pow(getX3() - getX(), 2) + pow(getY3() - getY(), 2));
        }
        float sideC () {
            return sqrt(pow(getX4() - getX3(), 2) + pow(getY4() - getY3(), 2));
        }
        float pTriangle () {
            return sideA() + sideB() + sideC();
        }
        float sTriangle () {
            return sqrt(pTriangle() * (pTriangle() - sideA()) * (pTriangle() - sideB()) * (pTriangle() - sideC()));
        }
	void boo () {
	    std::cout << "This is class Triangle! BOO" << std::endl;
	}
	void foo () {
	    std::cout << "This is class Triangle! FOO" << std::endl;
	}
        ~Triangle ()
        {
        }

};
