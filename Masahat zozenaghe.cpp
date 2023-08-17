#include<iostream>
#include<conio.h>

using namespace std;

void area(double x,double y,double h)
{
	double S;
	S=((x+y)*h)/2;
	cout<<"\nS = "<<S;
}
int main()
{
	double a,b,c;
	cout<<"Zele bozorg ra vard konid : ";
	cin>>a;
	cout<<"\nZele kochak ra vard konid : ";
	cin>>b;
	cout<<"\nertfa ra vard konid : ";
	cin>>c;
	
	area(a,b,c);
	
	getch();
	return 0;
}
