#include <iostream>
#include "prototypes_vector.hpp"

Vector::Vector (unsigned int length) {
    _length = 2 * length;
    _arr = new int [length];
}

Vector::Vector (const Vector &obj) {
    _length = obj._length;
    _arr = obj._arr;
}

Vector::~Vector() {
    delete []_arr;
}

int Vector::insert (unsigned int index, int a) {
    return _arr[index] = a;
}

int &Vector::operator[](unsigned int index) {
    int n = -1;
    if (index > _length / 2) {
        std::cout << "Error: Index must be less than tke length of the arra." << std::endl;
        return n;
    }
    return _arr[index];
}

void Vector::remove (unsigned int index) {
    for (int i = index; i < _length / 2 - 1; ++i) {
        _arr[index] = _arr[index + 1];
    }
}

int Vector::resize (unsigned int new_length) {
    long int m = 2 * new_length;
    if (m == _length) {
        return 0;
    }
    if (m < _length) {
        std::cout << "Warning: some of the elements of the array will be deleted." << std::endl;
        for (int i = new_length - 1; i < _length; ++i) {
            delete [i]_arr;
        }
    }
    int *arr = new int [_length];
    for (int i = 0; i < _length; ++i) {
        arr[i] = _arr[i];
    }
    delete []_arr;
    _arr = arr;
    _length = m;
}

int Vector::find (int a) {
    bool f = false;
    for (int i = 0; i < _length / 2; ++i) {
        if (a == _arr[i]) {
            f = true;
            return i;
        }
    }
    if (!f) {
        return -1;
    }
}
