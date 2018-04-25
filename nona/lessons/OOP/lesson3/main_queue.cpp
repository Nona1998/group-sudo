#include <iostream>
#include "queue.hpp"

int main () {
    Queue q(5);
    q.enqueue(103);
    q.enqueue(14);
    std::cout << "Length-> " << q.length() << std::endl;
    q.dequeue();
    q.enqueue(25);
    q.print();
    std::cout << "Length-> " << q.length() << std::endl;
    return 0;
}
