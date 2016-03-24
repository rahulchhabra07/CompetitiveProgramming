#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a,b,c;
	cin>>a>>b;
	c=a-b;
	if(!(c%10))
	{
		c++;
	}
	else
	{
		c--;
	}
	cout<<c;
	getch();
}
