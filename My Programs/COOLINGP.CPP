#include<iostream.h>
#include<conio.h>

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
	int n,m,ct,l;
	int *pi=new int[m];
	int *rac=new int[n];
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>m;
		int *pi=new int[m];
		int *rac=new int[m];
		for(int j=0;j<m;j++)
		{
			cin>>pi[j];
		}
		for(int k=0;k<m;k++)
		{
			cin>>rac[k];
		}
		for(j=0;j<m;j++)
		{
			for(l=j;l<m;l++)
			{
				if(pi[j]<pi[l])
				{
					swap(pi[j],pi[l]);
				}
			}
		}
		for(k=0;k<m;k++)
		{
			for(l=k;l<m;l++)
			{
				if(rac[k]<rac[l])
				{
					swap(rac[k],rac[l]);
				}
			}
		}
		j=k=l=ct=0;
		while(j<=m)
		{
			if(pi[j]<=rac[k])
			{
				ct++;
				j++;
				k++;
			}
			else
			{
				j++;
			}
		}
		cout<<ct;
	}
	getch();
}

