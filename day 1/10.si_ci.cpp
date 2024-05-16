#include<iostream>
#include<cmath>
int main(){
	float principal,rate,time;
	std::cout<<"Enter principal amount:";
	std::cin>>principal;
	std::cout<<"enter a rate";
	std::cin>>rate;
	std::cout<<"enter time";
	std::cin>>time;
	float si = (principal * rate * time) / 100;
	std::cout<<"simple interest is: "<<si;
	float ci = principal * pow((1+rate/100),time)-principal;
	std::cout<<"compund interest"<<ci;
	return 0;
}