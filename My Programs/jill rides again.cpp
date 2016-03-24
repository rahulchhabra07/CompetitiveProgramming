#include<bits/stdc++.h>
using namespace std;
int main()
{
		int tes;
		cin>>tes;
		for(int u=0;u<tes;u++)
		{
				int n;
				cin>>n;
				n--;
				int ar[n];
				for(int i=0;i<n;i++)
				{
						cin>>ar[i];
				}
				int dp[n],start[n];
				if(ar[0]>0)
				{
						start[0]=0;
						dp[0]=ar[0];
				}
				else
				{
						dp[0]=-1;
						start[0]=0;
				}				
				for(int i=1;i<n;i++)
				{
						if(dp[i-1]>=0)
						{
								dp[i]=dp[i-1]+ar[i];
								start[i]=start[i-1];
						}
						else
						{
								dp[i]=ar[i];
								start[i]=i;
						}
				}
				int max=0,maxl=0;
				int beg,end;
				for(int i=0;i<n;i++)
				{
						if(dp[i]>max)
						{
								max=dp[i];
								maxl=(i-start[i])+1;
								beg=start[i];
								end=i;
						}
						if(dp[i]==max)
						{
								if((i-start[i])+1>maxl)
								{
										maxl=(i-start[i])+1;
										beg=start[i];
										end=i;
								}
						}
				}
				if(max!=0)
				{
						cout<<"The nicest part of route "<<u+1<<" is between stops "<<beg+1<<" and "<<end+2<<'\n';
				}
				else
				{
						cout<<"Route "<<u+1<<" has no nice parts\n";
				}
		}
		return 0;
}
								
								
								
								
								
								
								
						
