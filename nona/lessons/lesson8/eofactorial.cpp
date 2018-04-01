#include <iostream>
void eofactorial (int i, int n, int f) {
	if (i <= n && n % 2 == 0) {
		i++;
		f *= i;
		i++;
		eofactorial (i,n,f);
	} else if (i <= n && n % 2 == 1) {
		f *= i;
		i += 2;
		eofactorial (i,n,f);
	} else {
		std::cout << n << "!! = " << f <<std::endl;
	}
}

int main () {
	std::cout <<"Double factorial." <<std::endl;
	std::cout <<"Enter a positive number: ";
	int n;
	std::cin >>n;
	if (n >= 1) {
		eofactorial (1,n,1);
	} else {
		std::cout <<"Please enter a positive number." <<std::endl;
	}
	return 0;
}
