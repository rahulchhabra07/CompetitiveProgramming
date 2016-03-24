#include<iostream.h>
#include<conio.h>
#include<math.h>


float dis(int x1,int y1,int x2,int y2)
{
	float d;
	d=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
	return d;
}


void swap(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}


void main()
{
	clrscr();
	int tes,n;
	float ct;
	cin>>tes;
	for(int a=1;a<=tes;a++)
	{
		ct=0;
		cin>>n;
		int *ar=new int[2*n];
		for(int i=0;i<n;i++)
		{
			cin>>ar[i]>>ar[n+i];
			}
			for(int j=0;j<n;j++)
			{
				for(int k=j;k<n;k++)
				if(ar[k]<ar[j])
				swap(ar[j],ar[k]);
				else
				{
					if(ar[j]==ar[k]&&ar[n+j]<ar[n+k])
					swap(ar[j],ar[k]);
				}
			}
			for(int l=0;l<n-1;l++)
			{
				ct+=dis(ar[l],ar[l+n],ar[l+1],ar[l+n+1]);
			}
			cout<<ct;
		}getch();
	}


