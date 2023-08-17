#include<iostream>

using namespace std;
long int fibonachi(int n)
{
	if(n==1 || n==2) return 1;
	else return fibonachi(n-1) + fibonachi(n-2);
}
int main()
{
	int num;
	char ch;
	cout<<"\nEnter a number : ";
	cin>>num;
	cout<<endl;
	for(int i=1;i<=num;i++)
	cout<<fibonachi(i)<<"  ";
	cout<<"\n\nbrai atmam barname adad 0 ra vard konid : ";
	cin>>ch;
	if(ch=='0') return 0;
	else return main();

	return 0;
}
