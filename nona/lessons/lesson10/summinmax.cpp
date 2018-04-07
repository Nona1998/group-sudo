#include <iostream>

int main () {
    int arr [15];
    int elements, sum_even = 0, sum_odd = 0;
    std::cout << "Enter 15 numbers: " << std::endl;
    for (int i = 0; i <= 14; i++) {
        std::cin >> elements;
        arr [i] = elements;
        if (arr [i] % 2 == 0) {
            sum_even += arr [i];
        } else {
            sum_odd += arr [i];
        }
    }
    int max = arr [0], min = arr [0];
    for (int j = 1; j <= 14; j++) {
        if (max <= arr [j]) {
            max = arr [j];
        }
        if (min >= arr [j]){
            min = arr [j];
        }
    }
    std::cout << "The sum of even numbers: " << sum_even << std::endl;
    std::cout << "The sum of odd numbers: " << sum_odd << std::endl;
    std::cout << "The maximum number: " << max << std::endl;
    std::cout << "The minimum number: " << min << std::endl;
    return 0;
}
