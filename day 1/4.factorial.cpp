#include<iostream>
int main(){
	int fact=1,n;
	std::cout<<"enter number";
	std::cin>>n;
	for(int i=1;i<=n;i++){
		fact = fact * i;
	}
	std::cout << "Factorial is:" << fact;
}