#include<iostream>
using namespace std;
int main()
{
	int num,i=1;
	cout<<"Enter a number upto which you want to see Even Numbers: ";
	cin>>num;
	cout<<"Even numbers upto "<<num<<" are"<<endl;
	while(i<=num)
	{
		if(i%2==0)
		{
			cout<<i<<" ";
		}
		i++;
	}
}
