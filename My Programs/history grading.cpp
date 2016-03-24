#include<bits/stdc++.h>
using namespace std;
int main()
{
		int n;
		cin>>n;
		int ar[n+1];
		for(int i=1;i<n+1;i++)
		{
				int a;
				cin>>a;
				ar[a]=i;
		}
		int p;
		int stud[n];
		int dp[n];
		
		while(cin>>p);
		{
				for(int i=0;i<n;i++)	dp[i]=1;
				stud[0]=p;
				for(int i=1;i<n;i++)
				{
						cin>>stud[i];
						for(int j=i-1;j>=0;j--)
						{
								if(ar[stud[j]]<ar[stud[i]])
								{
										dp[i]=dp[j]+1;
								}
						}
				}
				int max=1;
				for(int i=0;i<n;i++)
				{
						if(dp[i]>max) max=dp[i];
				}
				cout<<max<<'\n';
		}
		return 0;
}
						
		
