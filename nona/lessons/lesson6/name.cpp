#include <iostream>
#include <string>
using namespace std;
int main() {
	string name;
	int age,a;
	cout <<"Enter your name: ";
	cin >>name;
	cout <<"Enter your age: ";
	cin >>age;
	/*if ((name=="Sasha" && age==20) || (name=="Nona" && age==19)) {
		a=1;
	} else {
		a=0;
	}
	cout<<a;*/
	a= (name=="Sasha" && age==20) || (name=="Nona" && age==19)?1:0;
	cout<<a <<endl;
}
