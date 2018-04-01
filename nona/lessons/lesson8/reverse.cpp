#include <iostream>
int number (int i, int n) {
	if (n / 10 != 0 || n % 10 != 0) {
		i = n % 10;
		std::cout <<i;
		n /= 10;
		number (i,n);
	}
}

int main () {
	std::cout <<"Reverse number." <<std::endl;
	std::cout <<"Enter a positive number: ";
	int n;
	std::cin >>n;
	if (n >= 0) {
		number (1,n);
	} else {
		std::cout <<"Please, enter a positive number." <<std::endl;
	}
	return 0;
}
