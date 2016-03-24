#include<iostream.h>
#include<conio.h>
#include<math.h>


long z(long n)
{
	int counter=0;
	while (n/2)
	{
		counter+=(n/5);
		n/=5;
	}
	return counter;
}


void main()
{
	clrscr();
	long n;
	long m;
	cin>>n;
	for(int i=1; i<=n;i++)
	{
		cin>>m;
		cout<<z(m)<<endl;
	}
getch();
}
