#include <iostream>
#include <string>
using namespace std;
int main() {
	int age,a;
	cout<<"Enter your age: ";
	cin>>age;
	if (age>=20 && age <=30) {
		a=1;
	}else {
		 a=0;
	}	
	cout<<a <<endl;
	/*a= a>=20 && a<=30?1:0;
	cout<<a <<endl;*/
	return 0;
}
