#include<iostream>

using namespace std;

int fac(int i)
{
	if(i==0 || i==1) return 1;
	
	else return (i*fac(i-1));
}
int main()
{
	int num,fact;
	
	cout<<"Enter a number : ";
	cin>>num;
	
	fact=fac(num);
	
	cout<<num<<"! = "<<fact<<endl;
	
	char ch;
	
	cout<<"Brai etmam barname 0 ra vard konid : ";
	cin>>ch;
	
	if(ch=='0') return 0;
	else return main();
	
	return 0;
}
