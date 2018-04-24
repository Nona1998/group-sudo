#include <iostream>
#include "queue.hpp"

Queue::Queue(unsigned int length) {
    _head = 0;
    _tail = 0;
    _length = length;
    _arr = new int [_length];
}

Queue::Queue(const Queue& obj) {
    _arr = obj._arr;
    _length = obj._length;
}

Queue::~Queue() {
    delete []_arr;
}

int Queue::length() {
    return _length;
}

void Queue::enqueue(int element) {
        if (_head != length()) {
            _arr[++_head] = element;
        } else {
            std::cout << "Queue is full." << std::endl;
        }
}

int Queue::dequeue() {
    if (_tail != length()) {
        return _arr[--_tail] = 0;
     }
}

bool Queue::isEmpty() {
    return (_tail == _head);
}
