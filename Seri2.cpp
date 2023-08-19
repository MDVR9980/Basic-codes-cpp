#include<iostream>
#include<conio.h>

using namespace std;

long int fact(int num)
{
	int k=1;
	
	for(int i=1;i<=num;i++)
	k*=i;
	return k;
}
int main()
{
	short int num;
	double S=0,temp=1;
	
	cout<<"Enter a number : ";
	cin>>num;
	
	for(int i=1;i<=num;i++) S+=(i+1)/(fact(i)*temp);
	
	cout<<"S = "<<S;
	
	getch();
	return 0;
}
