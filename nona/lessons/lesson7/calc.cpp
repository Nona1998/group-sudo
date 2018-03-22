#include <iostream>
int calc (int a=1,int b=1,char c='+') {
	if (c=='+'){
	std::cout<<a<<" + "<<b<<" = "<<a+b<<std::endl;
	}	
	if (c=='-'){
		std::cout<<a<<" - "<<b<<" = "<<a+b<<std::endl;
	}
	if (c=='*'){
		std::cout<<a<<" * "<<b<<" = "<<a+b<<std::endl;
	}
	if (c=='/'){
		std::cout<<a<<" / "<<b<<" = "<<a+b<<std::endl;
	}
	if (c=='%'){
		std::cout<<a<<" % "<<b<<" = "<<a+b<<std::endl;
	}
	if (c != '+' && c != '-' && c != '*' && c != '/' && c != '%'){
		std::cout<<"Input +,-,*,/ or % in c"<<std::endl;
	}
} 

int main () {
	int a,b;
	char c;
	std::cout<<"enter number: a = ";
	std::cin>>a;
	std::cout<<"enter number: b = ";
	std::cin>>b;
	std::cout<<"enter (+,-,*,/ or %): c =";
	std::cin>>c;
	calc (a,b,c);
	
	 return 0;
}
