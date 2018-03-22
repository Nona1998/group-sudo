#include <iostream>
#include <string>
using namespace std;
int main() {
	int a;
    string name1;
    int age1;
    cout <<"Enter your name: ";
    cin >>name1;
    cout <<"Enter your age: ";
    cin >>age1;
    /*if (age1 == 19 && name1 == "Nona") {
        a = 1;
    } else {
    	a = 0;
    }
       cout<<a <<endl;*/
     a= age1 == 19 && name1 =="Nona"?1:0;
     cout<<a <<endl;
}
