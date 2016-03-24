#include<bits/stdc++.h>
using namespace std;
int main()
{
		ios_base::sync_with_stdio(0);
		long tes;
		cin>>tes;
		while(tes--)
		{
				long n;
				cin>>n;
				long s[n+1],p[n+1],m[n+1];
				vector<long> o[n+1];
				for(long i=1;i<=n;i++)
				{
						cin>>s[i];
						p[i]=s[i];
						m[i]=s[i];
						o[i].push_back(i);
				}
				long q;
				cin>>q;
				while(q--)
				{
						long a;
						cin>>a;
						if(a==0)
						{
								long x,y;
								cin>>x>>y;
								if(p[x]==p[y])
								{
										cout<<"Invalid query!\n";
								}
								else
								{
										if(m[x]<m[y])
										{
												swap(x,y);
										}
										for(vector<long>::iterator it=o[y].begin();it!=o[y].end();it++)
										{
												p[*it]=p[x];
												o[x].push_back(*it);
												m[*it]=m[x];
										}
								}
						}
						else
						{
								long x;
								cin>>x;
								cout<<p[x]<<'\n';
						}
				}
		}
		return 0;
}
										
										
										
										
										
										
										
						
						
								
