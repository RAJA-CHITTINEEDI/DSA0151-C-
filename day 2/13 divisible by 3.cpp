#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter a integer:";
	cin>>num;
	string result=(num%3==0)?"the integer is divisible by 3.":"the integer is not divisible by 3.";
	cout<<result<<endl;
	return 0;
}