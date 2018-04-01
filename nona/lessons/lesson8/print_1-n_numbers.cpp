#include <iostream>
void numbers (int i, int n) {
	if (i <= n) {
		std::cout <<i <<std::endl;
		i++;
		numbers (i,n);
	} else {
		std::cout <<"The End." <<std::endl;
	}
}

void even (int j, int n) {
	j++;
	if (j <= n && j % 2 == 0) {
		std::cout <<j <<std::endl;
		j++;
		even (j,n);
	} else {
		std::cout <<"This is the end of even numbers untill " << n << "." <<std::endl;
	}
}

void odd (int k, int n) {
	if (k <= n && k % 2 == 1) {
		std::cout <<k <<std::endl;
		k += 2;
		odd (k,n);
	} else {
		std::cout <<"This the end of odd numbers untill " << n << "." <<std::endl;
	}
}

int main () {
	std::cout <<"Print numbers untill n." <<std::endl;
	std::cout <<"Enter a number: ";
	int n;
	std::cin >>n;
	if (n >= 1) {
		numbers (1,n);
		std::cout <<"\nEven numbers untill: " << n <<std::endl;
		even (1,n);
		std::cout <<"\nOdd number untill: " << n <<std::endl;
		odd (1,n);
	} else {
		std::cout <<"Please enter a positive number." <<std::endl;
	}
	return 0;
}
