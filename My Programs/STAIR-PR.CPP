#include<iostream.h>
#include<conio.h>


void main()
{
	clrscr();
	int stair(int);
	cout<<"Enter the number of stairs";
	int n;
	cin>>n;
	cout<<stair(n);
	getch();
}

int stair(int n)
{
	if (n == 0)
	return 1;
	else
	{
		if (n == 1)
		return 2;
		else
		return stair(n-1)+stair(n-2);
	}
}
