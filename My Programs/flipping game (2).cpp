#include<bits/stdc++.h>
using namespace std;
int main()
{	
		int n;
		cin>>n;
		int ar[n],dp[n];
		int sum=0;
		for(int i=0;i<n;i++)
		{
				int a;
				cin>>a;
				if(a)	{ar[i]=-1;sum++;}
				else	ar[i]=1;
				if(!i) dp[0]=max(0,ar[0]);
				else
				{
						dp[i]=dp[i-1]+ar[i];
						if(dp[i]<0)
						{
								dp[i]=0;
						}
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
				cout<<sum+max;
				return 0;
}
		
				
				
