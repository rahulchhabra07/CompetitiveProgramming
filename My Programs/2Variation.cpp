#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
		long long n,k,ct=0;
		cin>>n>>k;
		long long ar[n];
		for(long long i=0;i<n;i++)
		{
				cin>>ar[i];
		}
		sort(ar,ar+n);
		for(long long i=0;i<n;i++)
		{
				for(long long j=i+1;j<n;j++)
				{
						if(ar[j]-ar[i]>=k)
						{
								ct+=(n-j);
								break;
						}
				}
		}
		cout<<ct;
		return 0;
}
		
