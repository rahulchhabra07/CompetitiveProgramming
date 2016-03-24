#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int tes,n,ct;
	cin>>tes;
	for(int a=1;a<=tes;a++)
	{
		ct=1;
		cin>>n;
		int *ar=new int[n];
		for(int j=0;j<n;j++)
		cin>>ar[j];
		for(int i=1;i<n;i++)
		{
			if(ar[i]<=ar[i-1])
			ct++;
			else
			if(ar[i]>ar[i-1])ar[i]=ar[i-1];
		}
		cout<<ct;
	}
	getch();
}