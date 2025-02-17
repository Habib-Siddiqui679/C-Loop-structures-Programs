#include<iostream>
using namespace std;
int main()
{
	int num,fact=1;
	cout<<"Enter a number: ";
	cin>>num;
	for(num;num>0;num--)
	{
		fact=fact*num;
	}
	cout<<"Factorial of "<<num<<" is "<<fact;
}
