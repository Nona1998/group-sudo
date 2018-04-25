#include <iostream>
#include "prototypes_vector.hpp"

int main () {
    std::cout << "=============================" << std::endl;
    Vector v(6);
    v.insert(0,10);
    v.insert(1,2);
    v.insert(2,6);
    v.insert(3,9);
    v.insert(4,25);
    v.insert(5,33);
    std::cout << "=================================="<< std::endl;
    v.insert(2,24);
    std::cout << "Enter an integer to find it in tha array: ";
    int num;
    std::cin >> num;
    if (v.find(num) != -1) {
        std::cout << num << " is the " << v.find(num) << "th element in the array." << std::endl;
    } else {
        std::cout << "The array doesn't contain that element." << std::endl;
    }
    return 0;
}
