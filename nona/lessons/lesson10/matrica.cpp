#include <iostream>

int main () {
    int arr [5] [5];
    int elements;
    std::cout << "Enter numbers from 1 to 20: " <<std::endl;
    for (int i = 0; i <= 4; i++) {
        for (int j = 0; j <= 4; j++) {
            std::cin >> elements;
            if (elements >= 1 && elements <= 20) {
                arr [i] [j] = elements;
            } else {
                j--;
                std::cout << elements << " is not from 1 to 20." << std::endl;
            }
        }
    }
    int sum1 = 0;
    for (int i = 0; i <= 4; i++) {
        for (int j = i + 1; j <= 4; j++) {
            sum1 += arr [i] [j];
        }
    }
    std::cout << "The sum of numbers in the right top: " << sum1 << std::endl;
    int sum2 = 0;
    for (int i = 1; i <= 4; i++) {
        for (int j = 0; j < i; j++) {
            sum2 += arr [i] [j];
        }
    }
    std::cout << "The sum of numbers in the left bottom: " << sum2 << std::endl;
    int sum3 = 0;
    for (int i = 0; i <= 3; i++) {
        for (int j = 0; j < 4 - i; j++) {
            sum3 += arr [i] [j];
        }
    }
    std::cout << "The sum of numbers in the left top: " << sum3 << std::endl;
    int sum4 = 0;
    for (int i = 1; i <= 4; i++) {
        for (int j = 4; j > 4 - i; j--) {
            sum4 += arr [i] [j];
        }
    }
    std::cout << "The sum of numbers in the right bottom: " << sum4 << std::endl;
    int sum_top = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 4 - i ; j++) {
            sum_top += arr [i] [j];
        }
    }
    std::cout << "The sum of numbers in the top: " << sum_top << std::endl;
    int sum_right = 0;
    for (int j = 4; j > 2; j--) {
        for (int i = 5 - j; i <= j - 1; i++) {
            sum_right += arr [i] [j];
        }
    }
    std::cout << "The sum of numbers in the right: " << sum_right << std::endl;
    int sum_bottom = 0;
    for (int i = 4; i > 2; i--) {
        for (int j = i - 1; j > 4 - i; j--) {
            sum_bottom += arr [i] [j];
        }
    }
    std::cout << "The sum of numbers in the bottom: " << sum_bottom << std::endl;
    int sum_left = 0;
    for (int j = 0; j < 2; j++) {
        for (int i = j + 1; i < 4 - j; i++) {
            sum_left += arr [i] [j];
        }
    }
    std::cout << "The sum of numbers in the left: " << sum_left << std::endl;
    return 0;
}
