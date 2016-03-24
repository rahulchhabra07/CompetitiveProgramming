#include<bits/stdc++.h>
using namespace std;
int main()
{
		long long n;
		cin>>n;
		long long ar[n];
		long long pref[n];
		long long suff[n];
		long long dp[n];
		cin>>ar[0];
		pref[0]=ar[0];
		for(long long i=1;i<n;i++)
		{
			cin>>ar[i];
			pref[i]=pref[i-1]+ar[i];
		}
		long long total=pref[n-1];
		suff[n-1]=ar[n-1];
		if(ar[n-1]*3==total)
		{
				dp[n-1]=1;
		}
		else
		{
				dp[n-1]=0;
		}
		for(long long i=n-2;i>=0;i--)
		{
				suff[i]=ar[i]+suff[i+1];
				if(suff[i]*3==total)
				{
						dp[i]=dp[i+1]+1;
				}
				else
				{
						dp[i]=dp[i+1];
				}
		}
		long long ct=0;
		for(long long i=0;i<n-2;i++)
		{
				if(pref[i]*3==total)
				{
						ct+=dp[i+2];
						//cout<<i<<' '<<dp[i+2]<<endl;
				}
		}
		cout<<ct;
		return 0;
}

	
			
