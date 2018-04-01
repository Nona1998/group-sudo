#include <iostream>
#include <string>
void palindrome (std::string word) {
	if (word == std::string (word.rbegin(), word.rend())) {
		std::cout << word << " is a palindrome." <<std::endl;
	} else {
		std::cout << word <<  " is not a palindrome." <<std::endl;
	}
}

int main () {
	std::cout <<"Palindrome." <<std::endl;
	std::cout <<"Enter a string: ";
	std::string word;
	std::cin >>word;
	palindrome (word);
	return 0;
}
