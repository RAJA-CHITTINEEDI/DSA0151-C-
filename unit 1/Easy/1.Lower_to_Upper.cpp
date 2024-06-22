#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	string str;
	cout<< "Enter a string";
	getline(cin, str);
	transform(str.begin(),str.end(),str.begin(), ::toupper);
	cout<< "Transformed string: " << str;
	return 0;
}