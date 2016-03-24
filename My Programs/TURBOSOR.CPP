#include<iostream>
#include<stdio.h>
using namespace std;


void swap(long long &x,long long &y)
{
	long long temp;
	temp=x;
	x=y;
	y=temp;
}


int main()
{
	
	long long n;
	scanf("%lld",n);
	long long ar[n];
	for(long long i=0;i<n;i++)
	{
		scanf("%lld",ar[i]);
	}
	for(long long j=0;j<n;j++)
	{
		for(long long k=j;k<n;k++)
		{
			if (ar[k]>ar[j])
			{
				swap(ar[k],ar[j]);
			}
		}
	}
	for(long long i=0;i<n;i++)
	{
		cout<<ar[i];
	}
	system("pause");
	return 0;
}
