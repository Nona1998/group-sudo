#include <iostream>

class Vector {
    private:
        int *_arr;
        unsigned int _length;
    public:
        Vector(unsigned int length = 10);
        Vector(const Vector &obj);
        ~Vector();
        int &operator[](unsigned int index);
        int insert (unsigned int index, int a = 0);
        void remove (unsigned int index);
        int resize (unsigned int new_length);
        int find (int a);
};
