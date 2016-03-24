#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
		int m,n;
		cin>>m;
		int a[m];
		for(int i=0;i<m;i++)
		{
				cin>>a[i];
		}
		cin>>n;
		int b[n];
		for(int i=0;i<n;i++)
		{
				cin>>b[i];
		}
		sort(a,a+m);
		sort(b,b+n);
		long ct=0;
		for(int i=0;i<m;i++)
		{
				for(int j=0;j<n;j++)
				{
						if(abs(a[i]-b[j])<=1)
						{
								b[j]=1000;
								ct++;
								break;
						}
				}
		}
		cout<<ct;
		return 0;
}
