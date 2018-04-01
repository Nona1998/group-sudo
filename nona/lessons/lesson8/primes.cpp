#include <iostream>
void primeNumber (int n, int m) {
	if (m < n) {
		if (n % m != 0) {
			m++;
			primeNumber (n,m);
			if (m == n - 1 && n % m != 0) {
				std::cout <<n << " is a prime number." <<std::endl;
			}
		}
		else {
			std::cout << n << " is not a prime number." <<std::endl;
		}
	}
}

int main () {
	std::cout <<"Prime numbers." <<std::endl;
	int n;
	std::cout <<"Enter a positive number: ";
	std::cin >>n;
	if (n == 1) {
		std::cout <<"1 is not a prime number." <<std::endl;
	}
	if (n == 2) {
		std::cout <<"2 is a prime number." <<std::endl;
	} else if (n >= 1 && n != 2) {
		primeNumber (n,1);
	} else {
		std::cout <<"Please enter a positive number." <<std::endl;
	}
	return 0;
}
