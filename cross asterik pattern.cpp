#include<iostream>
using namespace std;
int main() 
{
    int i=1,j;
    while(i<=5) {
        j=1; 
        while(j<=5) {
            if(i==j || j==6-i)
			{
                cout<<"*";
            } 
			else
			{
                cout<< " ";
            }
            j++;
        }
        cout<<endl;
        i++;
    }
}

