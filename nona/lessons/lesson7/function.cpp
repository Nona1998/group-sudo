#include <iostream>
#include <string>
int barev () {
	std::cout<<"Hello"<<std::endl;
}

int bye () {
	std::cout<<"Bye"<<std::endl;
}

int main () {
 	std::cout<<"Write anything"<<std::endl;
	std::string x;
    std::cin>> x;
	if (x == "barev") {
 		barev ();	
	} else {
        bye ();
	}
}
