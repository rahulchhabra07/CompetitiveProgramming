#include<iostream.h>
#include<conio.h>


int hcf(int a, int b)
{
	int x,y,r;
	if(a>b)
	{
		x=a,y=b;
	}
	else
	{
		x=b,y=a;
	}
	while(y)
	{
		r=x%y;
		x=y;
		y=r;
	}
	return x;
}


void main()
{
	clrscr();
	int tes,tot,hc;
	cin>>tes;
	for(int a=1;a<=tes;a++)
	{
		cin>>tot;
		int *ar=new int[tot];
		for(int i=0;i<tot;i++)
		{
			cin>>ar[i];
		}
		hc=hcf(ar[0],ar[1]);
		for(int j=2;j<tot;j++)
		{
			hc=hcf(hc,ar[j]);
		}
		for(int k=0;k<tot;k++)
		{
			cout<<ar[k]/hc<<" ";
		}
		cout<<endl;
	}
	getch();
}

