#include<iostream>
using namespace std;
int main(){
int num1,num2;
cout<<"enter first number:";
cin>>num1;
cout<<"enter the second number:";
cin>>num2;
string result=(num1==num2)?"the numbers are equal.":"the numbers are not equal.";
cout<<result<<endl;
return 0;
}