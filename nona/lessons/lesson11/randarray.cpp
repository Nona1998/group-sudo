#include <iostream>
#include <cstdlib>
#include <ctime>

int main () {
    int rand ();
    srand(time(0));
    std::cout << "Enter the size of the array: ";
    int size;
    std::cin >>size;
    int *arr = new int [size];
    for (int i = 0; i < size; i++) {
        arr [i] = rand () % 100 + 1;
        std::cout << i+1 << ". " << arr [i] << std::endl;
    }
    std::cout << "Find the index of: ";
    int num;
    std::cin >> num;
    for (int i = 0; i < size; i++) {
        if (num == arr [i]) {
            std::cout << "The index of " << num << " is " << i+1 << "." << std::endl;
            break;
        } else if (i == size - 1 && num != arr [i]) {
            std::cout << "The number " << num << " is not in this list." << std::endl;
        }
    }
    delete [] arr;
    return 0;
}
