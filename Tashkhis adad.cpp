#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int num,flag,a=0,b=0,c=0;
	
	cout<<"Tedad adad ra vard konid : ";
	cin>>num;
	
	int arr[num];
	
	for(int i=0;i<num;i++)
	{
	cout<<"\nEnter number "<<i+1<<" : ";
	cin>>arr[i];
	}
	
	cout<<"\n***********************\n\n";
	
	for(int i=0;i<num;i++)
	{
	flag=0;
	for(int j=2;j<arr[i];j++)
	{
	if(arr[i]%j==0 && arr[i]!=1)
	{
	cout<<arr[i]<<"  Adad morakan ast. "<<endl;
	a++;
	flag=1;
	break;
	}
	}
	if(flag==0 && arr[i]!=1)
	{
	cout<<arr[i]<<"  Adad aval ast. "<<endl;
	b++;
	flag=0;
	}
	if(arr[i]==1)
	{
	cout<<arr[i]<<"  Na adad aval ast v na adad morakab. "<<endl;
	c++;
	}
	}
	cout<<"\n***********************\n";
	cout<<"Tedad aedad aval : "<<b<<endl<<"Tedad aedad morakab : ";
	cout<<a<<endl<<"Tedad aedad 1 : "<<c;
	
	getch();
	return 0;
}
