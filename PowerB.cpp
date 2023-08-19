#include<iostream>
#include<conio.h>

using namespace std;

long int Power(int a,int n)
{
	if(n==0) return 1;
	else return a*Power(a,n-1);
}
int main()
{
	int a,n,Pow;
	char ch;
	
	cout<<"a = ";
	cin>>a;
	cout<<"n = ";
	cin>>n;
	
	Pow=Power(a,n);
	
	cout<<"a^n = "<<Pow<<endl;
	
	cout<<"brai atmam barname adad 0 ra vard konid : ";
	cin>>ch;
	
	if(ch=='0') return 0;
	else return main();
	
	getch();
	return 0;
}
