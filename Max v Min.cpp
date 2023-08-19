#include <iostream>
#include <conio.h> 

using namespace std;

int main()
{
	int a,b,c,d,max,min;
	char x;
	
	cout<<"\nEnter three number : ";
	cin>>a>>b>>c;
	
	d=(a<b ? a : b);
	min=(c<d ? c : d);
	cout<<"Min = "<<min<<endl;
	
	d=(a>b ? a : b);
	max=(c>d ? c : d);
	cout<<"Max = "<<max<<endl;
	
	cout<<"Enter (y/n) : ";
	cin>>x;
	
	if(x=='y' || x=='Y') return main();
	
	getch();
	return 0;
}
