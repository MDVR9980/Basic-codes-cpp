#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

long long int fact(int num)
{
	int fact=1;
	
	for(int i=1;i<=num;i++)
	{
		fact*=i;
	}
		return fact;
}
int main()
{
	short int x,k,sign=1;
	
	cout<<"\nEnter x : ";
	cin>>x;
	cout<<"\n***************";
	cout<<"\nEnter k : ";
	cin>>k;
	
	cout<<"\n***************";
	
	long double sinx=0;
	
	for(float i=1;i<=2*k-1;i+=2)
{
	sinx+=(sign*(pow(x,i)/fact(i)));
	sign=-sign;
}
	cout<<"\nSin("<<x<<") = "<<sinx;
	
	char ch;
	
	cout<<"\nEnter a Character (y/Y) ejrai mojadad : ";
	cin>>ch;
	
	if(ch=='y' || ch=='Y') return main();

	getch();
	return 0;
}
