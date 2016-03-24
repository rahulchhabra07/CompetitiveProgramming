#include<iostream>
#include<cmath>
using namespace std;
int main()
{
		long long n,k,ct=0;
		cin>>n>>k;
		long long ar[n];
		for(int i=0;i<n;i++)
		{
				cin>>ar[i];
		}
		for(int i=0;i<n;i++)
		{
				for(int j=i+1;j<n;j++)
				{
						if(abs(ar[i]-ar[j])>=k)
						{
								ct++;
						}
				}
		}
		cout<<ct;
		return 0;
}
						
