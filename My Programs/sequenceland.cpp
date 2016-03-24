#include<iostream>
#include<vector>
using namespace std;
typedef vector<int> vi;
int lcs(vi a,vi b)
{
		int matrix[a.size()][b.size()];
		for(int i=0;i<a.size();i++)
		{
				for(int j=0;j<b.size();j++)
				{
						if(a[i]==b[j])
						{
								matrix[i][j]=matrix[i-1][j-1]+1;
						}
						else
						matrix[i][j]=max(matrix[i-1][j],matrix[i][j-1]);
				}
		}
		return matrix[a.size()][b.size()];
}
void bfs(int,int,bool vis[],vi ar[],int k);
int main()
{
		//void bfs(int);
		int n,k;
		cin>>n>>k;
		vi ar[n];
		for(int i=0;i<n;i++)
		{
				int a;
				cin>>a;
				for(int j=0;j<a;j++)
				{
						int p;
						cin>>p;
						ar[j].push_back(p);
				}
		}
		bool vis[n];
		for(int i=0;i<n;i++)
		{
				vis[i]=0;
		}
		vis[0]=1;
		for(int i=0;i<n;i++)
		{
				if(vis[i])
				{
						bfs(i,n,vis,ar,k);
				}
		}
		int ct=0;
		for(int i=0;i<n;i++)
		{
				if(vis[i])
				{
						ct++;
				}
		}
		cout<<ct;
}
void bfs(int a,int n,bool vis[],vi ar[],int k)
{
		for(int i=0;i<n;i++)
		{
				if(!vis[i])
				{
						if(lcs(ar[i],ar[a])>=k)
						{
								vis[i]=1;
								bfs(i,n,vis,ar,k);
						}
				}
		}
}
						
						
						
						
						
						
				
