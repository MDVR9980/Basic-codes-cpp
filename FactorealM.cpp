#include<iostream>

using namespace std;

int main()
{
	int num,F=1;
	
	cout<<"N : ";
	cin>>num;
	
	for(int i=1;i<=num;i++) F*=i;
	cout<<num<<" => "<<num<<"! = "<<F;
	
	return 0;
}
