#include<stdio.h>

int main()
{
	long long int n,q;
	scanf("%lld,%lld",&n,&q);
	int ar[n][n];
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			ar[i][j]=n*i+j+1;
		}
	}
	int rmax[n],cmax[n];
	for(i=0;i<n;i++)
	{
		int rm=0,cm=0;
		for(j=0;j<n;j++)
		{
			if(ar[i][j]>rm)
			{
				rm=ar[i][j];
			}
			if(ar[j][i]>cm)
			{
				cm=ar[j][i];
			}
		}
		rmax[i]=rm;
		cmax[i]=cm;
	}
	for(i=0;i<q;i++)
	{	
		char com[12];
		for(j=0;j<10;j++)
		{
			scanf("%c",&com[j]);
		}
		if(com[0]=='R')
		{
			rmax[(com[7]-48)-1]+=(com[9]-48)		;
		}
		else if(com[0]=='C')
		{
			cmax[(com[7]-48)-1]+=(com[9]-48)		;
		}
	}
	int ma=0;
	for(i=0;i<n;i++)
	{
		if(rmax[i]>ma)
		{
			ma=rmax[i];		
		}
		if(cmax[i]>ma)
		{
			ma=cmax[i];
		}
	}
	printf("%d\n",ma);
	return 0;
}
