#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int n,m,counter;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>m;
		counter=1;
		while(m)
		{
			counter*=m;
			m-=1;
		}
	cout<<counter<<endl;
	}
	getch();
}

