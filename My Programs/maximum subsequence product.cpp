#include<bits/stdc++.h>
using namespace std;
int main()
{		
		long a;
		while(cin>>a)
		{
				vector<long long> v;
				v.push_back(a);
				long n;
				while(cin>>n,n!=-999999)
				{
						v.push_back(n);
				}
				long long dp[v.size()];
				long long negprod=0, posprod=0;
				for(int i=0;i<int(v.size());i++)
				{
						if(v[i]>0)
						{
								if(posprod==0)
								{
										posprod=v[i];
								}
								else
								{	
										posprod*=v[i];
										negprod*=v[i];
								}
						}
						if(v[i]<0)
						{
								v[i]=abs(v[i]);
								if(negprod==0)
								{
										negprod=max(v[i]*posprod,v[i]);
										posprod=0;
								}
								else
								{
										if(posprod==0)
										{
												posprod=v[i]*negprod;
												negprod=0;
										}
										else
										{
												negprod*=v[i];
												posprod*=v[i];
												swap(negprod,posprod);
										}
								}
						}
						if(v[i]==0)
						{
								posprod=0;
								negprod=0;
						}
						dp[i]=posprod;
				}
				long long max=LONG_LONG_MIN;
				for(int i=0;i<int(v.size());i++)
				{
						if(dp[i]>max)
						{
								max=dp[i];
						}
				}
				cout<<max<<'\n';
		}
		return 0;
}
												
												
												
												
												
												
								
										
								
								
