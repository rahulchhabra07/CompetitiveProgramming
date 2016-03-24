#include<iostream.h>
#include<conio.h>



int min(int a,int b)
{
	if(a<b)
	{
		return a;
	}
	else
	{
		return b;
	}
}



void main()
{
	clrscr();
	int n,in,a,b,ct=0,c,d;
	cin>>n;
	int *ar=new int[n];
	for(int i=0;i<n;i++)
	{
		ar[i]=i;
	}
	cin>>in;
	for(int j=1;j<=in;j++)
	{
		cin>>a>>b;
		c=ar[a];
		d=ar[b];
		for(int k=0;k<n;k++)
		{
			if(ar[k]==c||ar[k]==d)
			{
				ar[k]=min(a,b);
			}
		}

	}
	for(int l=0;l<n;l++)
	{
		cout<<ar[l]<<endl;
		if(ar[l]==l)
		{
			ct++;
		}
	}
	cout<<ct;
	getch();
}