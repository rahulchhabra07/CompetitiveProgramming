#include<iostream.h>
#include<conio.h>


int bit(int a,int t)
{
	int ct=0;
	for(int i=0;i<t;i++)
	{
		if(a&(1<<i))
		ct++;
	}
	return ct;
}


int p2(int n)
{
	int ct=1;
	while(n)
	{
		ct*=2;
		n--;
	}
	return ct;
}


void main()
{
	clrscr();
	int tes,n,x,y,a,b,s,o;
	cin>>tes;
	for(int t=1;t<=tes;t++)
	{
		cin>>n>>x>>y;
		a=bit(x,n);
		b=bit(y,n);
		s=a+b;
		if(s<=n)
		{
			o=n-s;
		}
		else
		{
			o=s-n;
		}
		cout<<(p2(n+1)-p2(o+1))/2;
	}
	getch();
}

