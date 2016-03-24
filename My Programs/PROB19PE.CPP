#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	long d=2,ct=0;
	int yr=1901;
	while(yr<=2000)
	{
		if(yr%4||(!(yr%100)&&(yr%400)))
		{
			d++;
		}
		else
		{
			d+=2;
		}
		d%=7;
		if(!d)
		{
			ct++;
		}
		yr++;
	}
	cout<<ct;
	getch();
}

