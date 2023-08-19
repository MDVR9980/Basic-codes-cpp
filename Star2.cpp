#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int num;
	
	cout<<"Enter Rows : ";
	cin>>num;
	
	cout<<endl;
	
	for(int i=num;i>=1;i--)
	{
		for(int j=i;j>=1;j-=2)
		{
			if(i%2!=0)
			cout<<"* ";
			if(i%2==0)
			cout<<" *";
		}
		cout<<endl;
	}
	getch();
	return 0;
}
