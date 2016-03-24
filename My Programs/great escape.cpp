#include<iostream>
#include<vector>
#include<queue>

using namespace std;

typedef long long ll;

int main()
{
		long long n,m;
		cin>>n>>m;
		vector <long long> ar[n+1];
		for(long long u=0;u<m;u++)
		{
				long long a,b;
				cin>>a>>b;
				ar[a].push_back(b);
				ar[b].push_back(a);
		}
		//for(int i=0;i<n
		long long s,t;
		cin>>s>>t;
		long long vis[n+1],level[n+1];
		for(long long i=1;i<=n;i++)
		{
				vis[i]=0;
				level[i]=0;
		}		
		vis[s]=1;
		level[s]=0;
		queue<ll> q;
		q.push(s);
		while(!q.empty())
		{	
				ll v;
				v=q.front();
				q.pop();
				for(ll i=0;i<ar[v].size(); i++)
				{
						if(!vis[ar[v][i]])
						{
   							q.push(ar[v][i]);
   							vis[v]=1;
   							level[ar[v][i]]=level[v]+1;
   					}
   			}
   	}
		cout<<level[t];
		return 0;
}
