#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n,x,y,a,b,max;
	cin>>n>>x>>y;
	int *ar=new int[3*n];
	int *v=new int[x];
	int *w=new int[y];
	for(int i=0;i<n;i++)
	{
		cin>>ar[i]>>ar[n+i];
	}
	for(i=0;i<x;i++)
	{
		cin>>v[i];
	}
	for(i=0;i<y;i++)
	{
		cin>>w[i];
	}
	for(i=0;i<n;i++)
	{
		a=v[0];
		for(int j=1;j<x;j++)
		{
			if(v[j]<ar[i])
			{
				a=v[j];
			}
		}
		b=w[y-1];
		for(j=y-1;j>=1;j--)
		{
			if(w[j]>ar[n+i])
			{
				b=w[j];
			}
		}
		ar[2*n+i]=b-a;
	}
	max=ar[2*n];
	for(i=1;i<n;i++)
	{
		if(max>ar[2*n+i])
		{
			max=ar[2*n+i];
		}
	}
	cout<<max;
	getch();
}


