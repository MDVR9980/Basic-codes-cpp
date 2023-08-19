#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int num;
	
	cout<<"Enyer a namber : ";
	cin>>num;
	
	cout<<endl<<endl<<endl;
	
	for(int i=num;i>=0;i--)
	{
		cout<<"\t";
		for(int j=0;j<=i;j++)
		{
		cout<<" * ";	
		}
		cout<<endl<<endl;
	}
	for(int i=0;i<=num;i++)
	{
		cout<<"\t";
		for(int j=0;j<=i;j++)
		{
		cout<<" * ";
		}
		cout<<endl<<endl;
	}
	getch();
	return 0;
}
