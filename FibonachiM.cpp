#include<iostream>

using namespace std;

int main()
{
	int num,z,x=1,y=1;
	
	cout<<"Enter N = ";
	cin>>num;
	
	cout<<x<<" , "<<y;
	
	for(int i=3;i<=num;i++)
	{
		cout<<" , ";
		z=x+y;
		cout<<z;
		x=y;
		y=z;
	}
	
	return 0;
}
