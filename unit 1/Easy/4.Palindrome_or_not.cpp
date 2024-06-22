#include<iostream>
using namespace std;
int main(){
	int num,rev,org,rem;
	cout<<"enter a num";
	cin>>num;
	org = num;
	while(num != 0){
		rem = num % 10;
		rev = rev *10 +rem;
		num /= 10;
	}
    if (org == rev) {
        cout << org << " is a palindrome. \n";
    } else {
        cout << org << " is not a palindrome. \n" ;
		}
}
