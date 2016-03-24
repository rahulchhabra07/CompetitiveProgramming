#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int wid;
	cin>>wid;
	double bal;
	cin>>bal;
	if (!(wid%5))
	{
		if (bal>wid)
		{
			bal=(bal-wid)-0.50;
		}
	}
	cout<<bal;
	getch();
}