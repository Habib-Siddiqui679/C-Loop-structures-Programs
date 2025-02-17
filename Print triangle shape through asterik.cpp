#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter a number upto which you want to print triangle shape through asterik: ";
	cin>>num;
	for(int i=1;i<=num;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
