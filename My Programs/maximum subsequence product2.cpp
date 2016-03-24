#include<bits/stdc++.h>
using namespace std;
int main()
{
		long long n;
		while(cin>>n)
		{	
				vector<long long> v;
				v.push_back(n);
				long long p;
				while(cin>>p,p!=-999999)
				{
						v.push_back(p);
				}
				long long posprod=0;
				long long negprod=0;
				for(int i=0;i<int(v.size());i++)
				{
						long long a=v[i];
						if(a>0)
						{
								if(posprod==0)
								{
										posprod=a;
								}
								else
								{
										posprod*=a;
										negprod*=a;
								}
						}
						if(a<0)
						{
								a=abs(a);
								if(negprod==0)
								{
										negprod=a;
										posprod=0;
								}
								else
								{
										negprod=max(a,posprod*a);
										posprod=a*negprod;
										swap(posprod,negprod);
								}
						}
						if(a==0)
						{
								negprod=posprod=0;
						}
				}
				long long max=LONG_LONG_MIN;
				for(int i=0;i<int(v.size());i++)
				{																									//check for 0 n negative;
						if(posprod>max)
						{
								max=posprod;
						}
				}
				if(max==0&&v.size()==1&&v[0]<0)
				{
						cout<<v[0]<<'\n';
				}
				else
				{
						cout<<max<<'\n';
				}
		}
		return 0;
}
										
