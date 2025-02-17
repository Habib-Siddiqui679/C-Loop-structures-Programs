#include <iostream>
using namespace std;
int main()
{
	int num,limit;
	cout<<"Enter a Number: ";
	cin>>num;
	cout<<"How far do you want to print the table: ";
	cin>>limit;
	for(int i=1;i<=limit;i++)
	{
		cout<<num<<"*"<<i<<"="<<num*i<<endl;
	}
}
