#include<iostream>

using namespace std;

int main()
{
	long int num,s=0;
	short int r;
	
	cout<<"Enter a number : ";
	cin>>num;
	
	while(num>0)
	{
		r=num%10;
		num/=10;
		s=s*10+r;
	}
	
	cout<<"Maghlob = "<<s;
	
	return 0;
}
