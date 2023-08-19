#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,c,r,t;
	cout<<"Enter a : ";
	cin>>a;
	cout<<"Enter b : ";
	cin>>b;
	if(b>a) t=b,b=a,a=t;
	if(a>b) c=a/b,r=a%b;
	cout<<"Out of place : "<<c<<endl;
	cout<<"Left over : "<<r;
	getch();
	return 0;
}
