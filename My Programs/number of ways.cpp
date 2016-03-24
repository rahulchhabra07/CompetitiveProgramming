#include<bits/stdc++.h>
using namespace std;
int main()
{
		long long n;
		cin>>n;
		long long ar[n];
		long long sum[n];
		cin>>ar[0];sum[0]=ar[0];
		for(long long i=1;i<n;i++)	
		{
				cin>>ar[i];
				sum[i]=sum[i-1]+ar[i];
		}
		int suffix[n-1];
		suffix[n-1]=0;
		suffix[n-1]=ar[n-1];
		long long total=sum[n-1];
		if(total%3)
		{	
				cout<<0;
				return 0;
		}
		int dp[n];
		if(ar[n-1]*3==total) dp[n-1]=1;
		else	dp[n-1]=0;
		for(int i=n-2;i>=-0;i--)
		{
				suffix[i]=suffix[i+1]+ar[i];
				if(3*suffix[i]==total)
				dp[i]=dp[i+1]+1;
				else
				dp[i]=dp[i+1];
		}
		long long ct=0;
		for(int i=0;i<n;i++)
		{
				if(3*sum[i]==total)
				ct+=dp[i+1];
		}
	
		cout<<ct;
		return 0;
}
				
