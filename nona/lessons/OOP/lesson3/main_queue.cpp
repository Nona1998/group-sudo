#include <iostream>
#include "queue.hpp"

int main () {
    int length;
    std::cout << "Length: ";
    std::cin >> length;
    Queue queue(length);
    int element;
    std::cout << "Add elements to the queue: " << std::endl;
    for (int i = 0; i < length; ++i) {
        std::cin >> element;
        queue.enqueue(element);
    }
    for (int i = 0; i < length; ++i) {
        std::cout << queue.dequeue() << std::endl;
    }
    return 0;
}
