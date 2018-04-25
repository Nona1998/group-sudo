#ifndef VECTOR
#define VECTOR

class Vector {
    private:
        int *_arr;
        unsigned int _length;
    public:
        Vector(unsigned int = 10);
        Vector(const Vector&);
        ~Vector();
        int &operator[](unsigned int);
        void insert (unsigned int, int);
        void remove (unsigned int);
        int resize (unsigned int);
        int find (int);
};

#endif
