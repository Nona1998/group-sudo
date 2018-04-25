#include <iostream>
#include "queue.hpp"

Queue::Queue(unsigned int size) {
    _head = 0;
    _tail = 0;
    _length = 0;
    _size = size;
    _arr = new int [_length];
}

Queue::Queue(const Queue& obj) {
    this->_arr = new int [_length];
    _length = obj._length;
    for (int i = 0; i < _length; ++i) {
        _arr = obj._arr;
    }
}

Queue::~Queue() {
    delete []_arr;
}

int Queue::length() {
    return _length;
}

void Queue::enqueue(int element) {
    if (!isFull()) {
        _arr[_head++] = element;
        ++_length;
    } else {
        std::cout << "Queue is full." << std::endl;
    }
}

int Queue::dequeue() {
    if (!isEmpty()) {
        return _arr[_tail++] = 0;
        --_length;
     }
}

bool Queue::isEmpty() {
    return (_tail == _length);
}

bool Queue::isFull() {
    return (_length == _size);
}

void Queue::print() {
    for (int i = 0; i < _length; ++i) {
        std::cout << _arr[i] << "  ";
    }
    std::cout << std::endl;
}
