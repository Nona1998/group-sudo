#include <iostream>

int main () {
    int arr [20] = {5, 10, 17, 23, 24, 25, 33, 38, 40, 46, 59, 63, 65, 66, 71, 79, 80, 89, 95, 100};
    int num;
    std::cout << "Find the index of: ";
    std::cin >> num;
    for (int i = 0; i < 20; i++) {
        if (num == arr [i]) {
            std::cout << "The index of " << num <<" is " << i + 1 << "." << std::endl;
            break;
        } else if (num != arr [i] && i == 19) {
            std::cout << num << " is not in this list." << std::endl;
        }
    }
    for (int i = 0; i < 20; i++) {
        std::cout << i+1 << ". " << arr [i] << std::endl;
    }
    return 0;
}
