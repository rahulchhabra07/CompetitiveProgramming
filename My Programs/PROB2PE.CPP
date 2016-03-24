#include<iostream>
//#include<conio.h>
#include<stdlib.h>
using namespace std;



int fib(int n)
{
	if(n==1||n==2)
	{
		return n;
	}
	else
	{
		return fib(n-2)+fib(n-1);
	}
}



int main()
{
//	clrscr();
	unsigned long long int i=1,ct=0,n=0;
	while(n<=4000000)
	{
		n=fib(i);
		if(!(n%2))
		{
			ct+=n;
		}
		i++;
	}
	ct-=n;
	cout<<ct;
	int m;
    cin>>n;
    if(m)
    return 0;
	
//	getch();
}
