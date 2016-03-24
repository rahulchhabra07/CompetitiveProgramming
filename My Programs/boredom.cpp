#include<bits/stdc++.h>
using namespace std;
int main()
{
		long long n;
		cin>>n;
		long long mmax=100005;
		long long ar[mmax];
		long long dp[mmax];
		for(long long i=0;i<mmax;i++)
		{
				dp[i]=0;
				ar[i]=0;
		}
		for(long long i=0;i<n;i++)
		{
				long long a;
				cin>>a;
				ar[a]++;
		}
		dp[1]=ar[1];
		dp[2]=max(ar[2]*2,ar[1]);
		for(long long i=3;i<mmax;i++)
		{
				dp[i]=max(dp[i-2]+(ar[i]*i),dp[i-1]);
				//cout<<ar[i]<<' ';
		}
		cout<<max(dp[mmax-1],dp[mmax-2]);
		return 0;
}

