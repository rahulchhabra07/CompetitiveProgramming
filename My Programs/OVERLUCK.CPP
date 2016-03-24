#include<iostream.h>
#include<conio.h>




int test(long n)
{

	do
	{
		if (n%10==4||n%10==7)
		{
			return 1;
			break;

		}
		n /= 10;


	}
	while(n>0);
	return 0;
}




void main()
{clrscr();
	int a;
	cin>>a;
	for(int i=1;i<=a;i++)
	{
		int n;
		int ct=0;
		cin>>n;

		for(int j=1; j<=n; j++)
		{if (n%j==0)
		{
			if (test(j)==1)
			{
				ct=ct+1;
			}
		}}


		cout<<ct;
	}
getch();}
