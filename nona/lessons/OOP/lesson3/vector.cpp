#include <iostream>
#include "prototypes_vector.hpp"

Vector::Vector (unsigned int length) {
    _length = 2 * length;
    _arr = new int [_length];
}

Vector::Vector (const Vector &obj) {
    _length = obj._length;
    this->_arr = new int [_length];
    for (int i = 0; i < _length; ++i) {
        _arr = obj._arr;
    }
}

Vector::~Vector() {
    delete []_arr;
}

void Vector::insert (unsigned int index, int a) {
    for (int i = _length - 1; i > index; --i) {
       _arr[i] = _arr[i - 1];
    }
    _arr[index] = a;
    for(int i = 0; i < _length;  ++i) {
        std::cout << _arr[i] << "  ";
    }
    std::cout << std::endl;
}

int &Vector::operator[](unsigned int index) {
    if (index > _length) {
        int n = -1;
        std::cout << "Error: Index must be less than the length of the array." << std::endl;
        return n;
    }
    return _arr[index];
}

void Vector::remove (unsigned int index) {
    for (int i = index; i < _length - 1; ++i) {
        _arr[index] = _arr[index + 1];
    }
    _arr[_length - 1] = 0;
}

int Vector::resize (unsigned int new_length) {
    long int m = 2 * new_length;
    if (m == _length) {
        return 0;
    }
    if (m < _length) {
        std::cout << "Warning: some of the elements of the array will be deleted." << std::endl;
        for (int i = m; i < _length; ++i) {
            _arr[i] = 0;
        }
        return -1;
    }
    int *arr = new int [m];
    for (int i = 0; i < _length; ++i) {
        arr[i] = _arr[i];
    }
    delete []_arr;
    _arr = arr;
    _length = m;
    return 0;
}

int Vector::find (int a) {
    for (int i = 0; i < _length; ++i) {
        if (a ==_arr[i] && a != 0) {
            return i;
            break;
        }
    }
    return -1;
}
