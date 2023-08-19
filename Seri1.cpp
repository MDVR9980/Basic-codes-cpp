#include<iostream>
#include<conio.h>

using namespace std;

int main()
{	
	int num;
	float S=1,k=1;
	
	cout<<"Enter a number : ";
	cin>>num;
	
	for(int i=1;i<=num;i++) S+=(k/(2*i));
	
	cout<<"S = "<<S;
	
	getch();
	return 0;
}
