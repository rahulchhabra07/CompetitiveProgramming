#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n,a;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		if(a%2)
		{
			cout<<"BOB";
		}
		else
		{
			cout<<"ALICE";
		}
	}
	getch();
}
