#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	char ch;
	float num;
	
	cout<<"Enter point : ";
	cin>>num;
	
	if(num<=20 && num>=18)
	ch='A';
	else if(17.99>=num && num>=16)
	ch='B';
	else if(15.99>=num && num>=14)
	ch='C';
	else if(13.99>=num && num>=10)
	ch='D';
	else if(9.99>=num && num>=0)
	ch='E';
	else cout<<"Eror ";
	
	if(ch=='A' || ch=='B' || ch=='C' || ch=='D' || ch=='E')
	cout<<"Darage : "<<ch;
	
	getch();
	return 0;
}
