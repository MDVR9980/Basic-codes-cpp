#include<iostream>
#include<conio.h>
using namespace std;
void sort(int [],int );
int main()
{
	int n;
	cout<<"Enter N : ";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Enter number "<<i+1<<" : ";
		cin>>arr[i];
	}
	
	sort(arr,n);
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i];
		if(i==n-1) break;
		cout<<'\t';
	}
	getch();
	return 0;
}
void sort(int arr[],int len)
{
	int temp=0;
	for(int i=0;i<len-1;i++)
	{
	for(int j=0;j<len-1;j++)
	{
		if(arr[j]>arr[j+1])
		if(arr[j]>arr[j+1])
		{
		temp=arr[j];
		arr[j]=arr[j+1];
		arr[j+1]=temp;		
		}			
	}
	}	
}





