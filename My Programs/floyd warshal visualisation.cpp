#include<bits/stdc++.h>
using namespace std;
int main()
{
		int n;
		cin>>n;
		int ar[n][n];
		for(int i=0;i<n;i++)
		{
				for(int j=0;j<n;j++)
				{
						cin>>ar[i][j];
				}
		}
		int path[n][n][n];
		for(int s=0;s<n;s++)
		{
				for(int t=0;t<n;t++)
				{
						if(s==t)
						{
								path[s][t][0]=0;
						}
						else
						{
								path[s][t][0]=INT_MAX;
						}
				}
		}
		for(int i=1;i<=n;i++)
		{	
				for(int s=0;s<n;s++)
				{
						for(int t=0;t<n;t++)
						{
								for(int u=0;u<n;u++)
								{
										path[s][t][i]=min(path[s][u][i-1]+ar[u][t],path[s][t][0]);
								}
						}
				}
				for(int s=0;s<n;s++)
				{
						for(int t=0;t<n;t++)
						{
								cout<<path[s][t][i]<<' ';
						}
						cout<<'\n';
				}
				cout<<'\n'<<'\n';
		}
		return 0;
}

		
										
								
								
								
								
								
								
								
				
