#include<bits/stdc++.h>
using namespace std;
int main()
{
		int n;
		cin>>n;
		n++;
		int dp[n];
		dp[0]=0;
		dp[1]=0;
		for(int i=2;i<n;i++)
		{				
				dp[i]=(3<<(i-2))+3*dp[i-2];
				//cout<<dp[i]<<endl;
		}
		cout<<dp[n-1];
		return 0;
}

