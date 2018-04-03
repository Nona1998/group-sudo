#include <iostream>
int main () {
    int a, b, sum = 0;
    std::cout <<"Enter 2 numbers." <<std::endl;
    std::cout <<"A: ";
    std::cin >>a;
    std::cout <<"B: ";
    std::cin >>b;
    if (a <= b) {
        for (int n = a; n <= b; n++) {
            if (n % 2 == 1) {
                continue;
            }
            sum += n;
        }
        std::cout <<"The sum of even numbers from " << a << " to " << b << " is: " << sum <<std::endl;
    } else {
        std::cout <<"Error: A is bigger than B" <<std::endl;
    }
    return 0;
}
