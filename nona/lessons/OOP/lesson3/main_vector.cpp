#include <iostream>
#include <cstdlib>
#include <ctime>
#include "prototypes_vector.hpp"

int main () {
    srand(time(0));
    unsigned int length;
    std::cout << "Length:";
    std::cin >> length;
    Vector vector(length);
    std::cout << "Adding elements in the array: " << std::endl;
    for (int i = 0; i < length; i++) {
        std::cout << i << ".  " << vector.insert(i, rand() % 9 + 1) << std::endl;
    }
    std::cout << "Find element: ";
    int num;
    std::cin >> num;
    if (vector.find(num) == -1) {
        std::cout << "The array doesn't contain that element." << std::endl;
    } else {
        std::cout << num << "is the " << vector.find(num) << "th element in the array." << std::endl;
    }
    return 0;
}
