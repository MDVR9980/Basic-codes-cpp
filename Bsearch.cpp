#include<iostream>

using namespace std;

void sort(int [],int );

int bserch(int [],int ,int ,int ,int );

int main()
{
	int n;
	cout<<"Enter N : ";
	cin>>n;
	
	cout<<"--------------------------------\n";
	int arr[n];
	
	for(int i=0;i<n;i++)
	{
		cout<<"Enter number "<<i+1<<" : ";
		cin>>arr[i];
		cout<<"--------------------------------\n";
	}
	cout<<endl;
	
	sort(arr,n);
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i];
		if(i==n-1) cout<<endl;
		if(i==n-1) break;
		cout<<"  ";
	}
	
	cout<<"\n--------------------------------\n";
	
	int key;
	cout<<"\nEnter key : ";
	cin>>key;
	
	cout<<"\n--------------------------------\n\n";
	
	int x=bserch(arr,n,key,0,n-1);
	if(x==-1)
	cout<<"Not found.";
	else cout<<"Found in element : "<<x;
	
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
		{
		temp=arr[j];
		arr[j]=arr[j+1];
		arr[j+1]=temp;		
		}			
	}
	}	
}

int bserch(int arr[],int len,int key,int low,int high)
{
	int mid;
	while(low<=high)
	{
	mid=(low+high)/2;
	if(key==arr[mid]) return mid;
	
	else if(key<arr[mid]) 	high=mid-1;
	
	else low=mid+1;
	}
	return -1;
}
