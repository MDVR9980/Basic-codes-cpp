#include<iostream>
#include<conio.h>

using namespace std;

{
	int base,num;
	
	cout<<"Enter base : ";
	cin>>base;
	cout<<"Enter num : ";
	cin>>num;
	
	const int b=base;
	
	for(int i=1;i<num;i++)
	base*=b;
	
	cout<<"base ^ "<<num<<" : "<<base;
	getch();
	return 0;
}
