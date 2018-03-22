#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
int foo (int a,int b) {
	if (a == b) {
		std::cout <<"Draw." <<std::endl;
	} 
	if ((a == 1 && b == 3) || (a == 2 && b == 1) || (a == 3 && b == 2)) {
		std::cout <<"Player 1 is the winner!"  <<std::endl;
	} 
	if ((a == 1 && b == 2) || (a == 2 && b == 3) || (a == 3 && b == 1)) {
		std::cout <<"Player 2 is the winner!" <<std::endl;
	}
}

int computerfoo () {
	int a,b;
	std::cout <<"Player 1: Enter 1 (rock), 2 (paper) or 3 (scissors): ";
	std::cin >>a;
	std::cout <<"Player 2: Enter 1 (rock), 2 (paper) or 3 (scissors): ";
	srand((unsigned)time(0));
	b = (rand () % 3 )+ 1;
	std::cout<<b <<std::endl;
	foo (a,b);
}

int friendfoo () {
	int a,b;
	std::cout <<"Player 1: Enter 1 (rock), 2 (paper) or 3 (scissors): ";
	std::cin >>a;
	std::cout <<"Player 2: Enter 1 (rock), 2 (paper) or 3 (scissors): ";
	std::cin >>b;
	foo (a,b);
}

int main () {
	std::string partner,computer;
	std::cout <<"Do you like to play with computer or with friend?: ";
	std::cin >>partner;
	if (partner == "computer") {
		computerfoo ();
	} else if (partner == "friend") {
		friendfoo ();
	} else {
		std::cout <<"Error: You should choose computer or friend" <<std::endl;
	}
	return 0;
}
