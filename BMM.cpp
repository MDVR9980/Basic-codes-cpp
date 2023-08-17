#include<iostream>

using namespace std;

int main() 
{ 
	int x,y,t,sum1=0,sum2=0;
				
	cout<<"Enter two number : ";
	cin>>x>>y;
	
	cout<<"*****************\n"<<"Maghsom alae hai "<<x<<" : ";
	
	for(int i=1;i<=x;i++)
		if(x%i==0)
	{
		cout<<i<<" ";
		sum1 += i;
	}
	cout<<"\n*****************\n"<<"Maghsom alae hai "<<y<<" : ";
	
	for(int i=1;i<=y;i++)
	if(y%i==0)
	{
		cout<<i<<" ";
		sum2+=i;
	}
	while(x!=y)
	{
		if(y>x) t=y,y=x,x=t;
		if(x>y) x=x-y ;
	}
	cout<<"\n*****************\nSum number 1 : "<<sum1<<"\n*****************\n"<<"Sum number 2 : "<<sum2;
	cout<<"\n*****************\nBMM = "<<y;

	return 0;
	}
