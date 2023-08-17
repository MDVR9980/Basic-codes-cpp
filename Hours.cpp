#include<iostream>

using namespace std;

int main()
{
	int S,M,H;
	
	cout<<"Enter Seconds : ";
	cin>>S;
	
	H=S/3600;
	S=S-H*3600;
	M=S/60;
	S=S-M*60;
	
	cout<<H<<" : "<<M<<" : "<<S;
	
	return 0;
}
