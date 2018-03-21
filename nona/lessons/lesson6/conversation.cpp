#include <iostream>
using namespace std;
int main() {
	std::cout <<"Hello"<<std::endl;
        string name1;
	std::cout <<"What is your name? --> ";
	std::cin >>name1;
	std::cout <<"My name is " << name1 << "." << std::endl;
	int age1;
	std::cout <<"How old are you? --> ";
	std::cin >>age1;
	std::cout <<"I am " << age1 << " years old." << std::endl;
	std::cout <<"That's enough about you!"<<std::endl;
	string name2;
	std::cout <<"What is your friend's name? --> ";
	std::cin >>name2;
	std::cout <<"My friend's name is " << name2 << "." << std::endl;
	int age2;
	std::cout <<"How old is your friend?  --> ";
	std::cin >>age2; 
	std::cout <<"My friend is " << age2 << " years old." << std::endl;
	if (age1==age2) {
		std::cout << name2 << " is the same age as " << name1 << "." << std::endl;
		}
        if (age1>age2) {
                std::cout << name1 << " is elder than  " << name2 << "." << std::endl;
                }
        if (age1<age2) {
                std::cout << name2 << " is elder than  " << name1 << "." << std::endl;
                }
	return 0;
}
