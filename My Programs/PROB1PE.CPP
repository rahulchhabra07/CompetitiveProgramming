#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	long long  sum=0;
	for(int i=1;i<1000;i++)
	{
		if(!(i%3)||!(i%5))
		{
			sum+=i;
		}
	}
	cout<<sum;
	getch();
}