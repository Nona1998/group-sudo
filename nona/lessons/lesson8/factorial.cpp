#include <iostream>
void factorial (int i, int n, int f) {
	if (i <= n) {
		f *= i;
		i++;
		factorial (i, n, f);
	} else {
		std::cout << n << "! = " << f << "\n";
	}
}

int main () {
	std::cout <<"Enter a positive number of which factorial you want to know: ";
	int n;
	std::cin >>n;
	if (n >= 1) {
		factorial (1,n,1);
	} else {
		std::cout <<"Please enter a positive number." <<std::endl;
	}
	return 0;
}
