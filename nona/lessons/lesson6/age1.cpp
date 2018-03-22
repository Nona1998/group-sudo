#include <iostream>
#include <string>
using namespace std;
int main () {
	int age,a;
	cout<<"Enter your age: ";
	cin>>age;
	if (age<10 || age>60) {
		a=1;
	} else {
		a=0;
	}
	cout<<a <<endl;
	/*a= age<10 || age >60?1:0;
	cout<<a <<endl;*/
	return 0;
}
