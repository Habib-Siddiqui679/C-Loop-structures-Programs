#include<iostream>
using namespace std;
int main()
{
	int num,sum=0,i=1;
	cout<<"Enter a number upto which you want to get sum: ";
	cin>>num;
	while(i<=num)
	{
		sum=sum+i;
		i++;
	}
	cout<<"Sum upto "<<num<<" = "<<sum;
}
