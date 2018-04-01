#include <iostream>
void degree (int i, int n, int k, int long long x) {
	if (i <= k) {
		x *= n;
		i++;
		degree (i, n, k, x);
	} else {
		std::cout << n << " to the " << k << "th power equals " << x << "." <<std::endl;
	}
}

int main () {
	int n,k;
	std::cout <<"N to the Kth power." <<std::endl;
	std::cout <<"Enter N: ";
	std::cin >>n;
	std::cout <<"Enter K: ";
	std::cin >>k;
	if (n >= 1 && k >= 1) {
		degree (1,n,k,1);
	} else {
		std::cout <<"N and K must be positive numbers." <<std::endl;
	}
	return 0;
}
