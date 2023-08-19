#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	long int num;
	short int sum=0,count=0;

	cout<<"Enter a number: ";
	cin>>num;

	cout<<"\n********************\n";

	while(num>0)
	{
	count++;
	sum+=(num%10);
	num=num/10;
	}
	cout<<"\nNumber of digits input number = "<<count<<endl;
	cout<<"\n********************";
	cout<<"\nSum of figures = "<<sum;

	getch();
	return 0;
}
