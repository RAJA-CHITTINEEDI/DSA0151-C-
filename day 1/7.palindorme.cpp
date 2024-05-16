#include<iostream>
int main(){
	int num,rev,org,rem;
	std::cout<<"enter a num";
	std::cin>>num;
	org = num;
	while(num != 0){
		rem = num % 10;
		rev = rev *10 +rem;
		num /= 10;
	}
    if (org == rev) {
        std::cout << org << " is a palindrome. \n";
    } else {
        std::cout << org << " is not a palindrome. \n" ;
		}
}