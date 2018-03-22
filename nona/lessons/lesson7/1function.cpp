#include <iostream>
#include <string>
int hello () {
	std::cout <<"Hello. What's your name?" << std::endl;
}

int myName () {
	std::cout << "My name is Function" << std::endl;
}

int age () {
	std::cout <<"How old are you?" << std::endl;
}	

int myAge () {
	std::cout << "I'm 2 years old." << std::endl;
}

int iM () {
	std::cout <<"Let's go Instigate Mobile.";
}

int main () {
	hello ();
	std::string name;
	std::cin >>name;
	myName ();
	age ();
	int age;
	std::cin>> age;
	myAge ();
	iM ();

}
