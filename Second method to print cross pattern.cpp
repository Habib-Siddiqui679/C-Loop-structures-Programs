#include<iostream>
using namespace std;
int main() 
{
    int size;
    cout<<"Enter the size of the cross: ";
    cin>>size;
    int i=0;
    do
	{
        int j=0;
        do
		 {
            if(i==j || j==(size-i-1)) 
			{
                cout<<"*";
            } 
			else 
			{
                cout<< " ";
            }
            j++;
        } 
		while(j<size);
        cout<<endl;
        i++;
    } 
	while(i<size);
}

