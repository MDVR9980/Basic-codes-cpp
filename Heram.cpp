#include<iostream>

using namespace std;
int main()
{
	int x;
	char z;
	 
	cout<<"Tedad satrhara vard konid : ";
	cin>>x;
	
	for(int i=1;i<=x;i++)
	{
		cout<<"  "<<endl<<endl;
	for(int j=i;j<=x;j++)
	{
		cout<<"    ";
	}
	for(int k=1;k<=2*i-1;k++)
	{
		cout<<k<<"   ";
	}
		cout<<"\n";
	}
	cout<<"\nbrai egrai mogadad ( Y | y ) ra vard konid : ";
	cin>>z;
	
	if(z == 'Y' || z == 'y')
	{
	system("cls");
	return main();
	}

	return 0;
}
