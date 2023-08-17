#include<iostream>
#include<math.h>

using namespace std;

long long int fact(int num)
{
	int fact=1;
	
	for(int i=1;i<=num;i++) fact*=i;
		
	return fact;
}
int main()
{
	int x,k,sign=1;
	
	cout<<"Enter x : ";
	cin>>x;
	cout<<"Enter k : ";
	cin>>k;
	
	long double cosx=0;
	
	for(float i=0;i<=2*k;i+=2)
	{
		cosx+=(sign*(pow(x,i)/fact(i)));
		sign=-sign;
	}
	cout<<"Cos("<<x<<") = "<<cosx;
	
	return 0;
}
