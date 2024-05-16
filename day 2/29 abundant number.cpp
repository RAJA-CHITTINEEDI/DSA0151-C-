#include<iostream>
using namespace std;
int main(){
	int num=12;
	int sum=0;
	for (int i=1;i<num;i++)
	{
		if(num%i==0)
		{
			sum+=i;
		}
	}
	if(num>sum)
	{
		cout<<"abundant number";
	}
	else
	{
		cout<<"not abundant";
	}
	return 0;
}