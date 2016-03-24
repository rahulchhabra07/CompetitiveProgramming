#include<iostream.h>
#include<conio.h>
void main()
{
int n;
cin>>n;
int* ar[n];
for(int i=0;i<=n-1;i++)
{ar[i]=i;}
for(int i=0;i<=n-i;i++)
{cout<<ar[i]<<endl;}
}
