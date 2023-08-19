#include<iostream>
#include<conio.h>
using namespace std;
int main()
{	
	int n;
	char x;
	
	cout<<"Vard konid martabeye do matrix n*n ra : ";
	cin>>n;
	
	int A[n][n],B[n][n],C[n][n],D[n][n],E[n][n]={0};
	
	cout<<endl<<"Vard konid draie hai matrix 1 : "<<endl<<endl;
	
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)	
	cin>>A[i][j];	

	cout<<endl<<"Vard konid draie hai matrix 2 : "<<endl;
	
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)	
	cin>>B[i][j];
	
	cout<<endl<<"A+B : "<<endl;
	
	for(int i=0;i<n;i++)
	{
	for(int j=0;j<n;j++)	
	{
	C[i][j]=A[i][j]+B[i][j];
	if(C[i][j]>=0)
	cout<<"  "<<C[i][j]<<"\t";
	if(C[i][j]<0)
	cout<<" "<<C[i][j]<<"\t";
	}
		cout<<"\n";
	}
	
	cout<<endl<<"A-B : "<<endl;
	
	for(int i=0;i<n;i++)
	{
	for(int j=0;j<n;j++)	
	{
	D[i][j]=A[i][j]-B[i][j];
	if(D[i][j]>=0)
	cout<<"  "<<D[i][j]<<"\t";
	if(D[i][j]<0)
	cout<<" "<<D[i][j]<<"\t";
	}
	cout<<"\n";
	}
	
	cout<<endl<<"A*B : "<<endl;
	
	for(int i=0;i<n;i++)
	{
	for(int j=0;j<n;j++)	
	{
	E[i][j]=0;
	for(int k=0;k<n;k++)
	{
	E[i][j]+=A[i][k]*B[k][j];
	}
	if(E[i][j]>=0)
	cout<<"  "<<E[i][j]<<"\t";
	if(E[i][j]<0)
	cout<<" "<<E[i][j]<<"\t";
	}
	cout<<"\n";
	}
	
	cout<<"age mikhaid do ta matrix jadid vard konid ( Y | y ) ra vard konid  : ";
	cin>>x;
	
	if(x =='Y' || x =='y')
	{
	system("cls");
	return main();	
	}
	
	getch();
	return 0;
}
