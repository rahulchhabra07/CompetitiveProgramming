#include<iostream.h>
#include<conio.h>




void main()
{
	clrscr();
	int n,temp;
	int ct=0;
	int temp1=0;
	cin>>n;
	temp=n;
	while(n)
	{
		ct++;
		n/=2;
	}
	for(int i=0;i<ct;i++)
	{
		if(temp&(1<<i))
		{
			temp1*=10;
			temp1++;
		}
		else
		{
			temp1*=10;
		}
	}
	cout<<temp1;
	getch();
}