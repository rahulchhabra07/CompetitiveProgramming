#include<bits/stdc++.h>
using namespace std;
int main()
{
		int n;
		while(cin>>n,n)
		{
				int ar[n];
				for(int i=0;i<n;i++)
				{
						cin>>ar[i];
				}
				int dp[n];
				dp[0]=max(0,ar[0]);
				for(int i=1;i<n;i++)
				{
						dp[i]=max(dp[i-1]+ar[i],ar[i]);
						if(dp[i]<0)
						{
								dp[i]=0;
						}
				}
				int max=INT_MIN;
				for(int i=0;i<n;i++)
				{
						if(dp[i]>max)
						{
								max=dp[i];
						}
				}
				if(max==0)
				{
						cout<<"Losing streak.\n";
				}
				else
				{
						cout<<"The maximum winning streak is "<<max<<".\n";
				}
		}
		return 0;
}
