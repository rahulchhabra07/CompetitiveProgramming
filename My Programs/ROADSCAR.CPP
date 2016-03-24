#include<iostream.h>
#include<conio.h>
int p2(int n)
{
	int k;
	k=1;
	int i;
	for(i=0;i<n;i++)
	{k=2*k;}
	return k;
}

void main()
{
	clrscr();
	int t,h,n;
	cin>>t;
	for(int a=1;a<=t;a++)
	{

		cin>>h;

		n=p2(h+1)-1;
		if (n%3)
		{
			cout<<n/3+1;
		}
		else
		{
			cout<<n/3;
		}
	getch();}
}