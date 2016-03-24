#include<bits/stdc++.h>
using namespace std;

bool comp(const int a, const int b)
{
		return a>b;
}
int main()
{
		int n,s;
		cin>>n>>s;
	//	map<int, int, comp> buy;
		map<int, int, std::greater<int> > buy;
		map<int, int > sell;
		for(int i=0;i<n;i++)
		{
				char d;
				int p,q;
				cin>>d>>p>>q;
				if(d=='B')
				{
						if(buy.count(p)>0)
						{
								buy[p]+=q;
						}
						else
						{
								buy[p]=q;
						}
				}
				if(d=='S')
				{
						if(sell.count(p)>0)
						{
								sell[p]+=q;
						}
						else
						{
								sell[p]=q;
						}
				}				
		}
		int k=0;
		int ar1[s],ar2[s];
		
		for (std::map<int,int>::iterator it=sell.begin(); it!=sell.end()&k<s; ++it,k++)
		{
				ar1[k]=it->first;
				ar2[k]=it->second;
		}
		for(int i=s-1;i>=0;i--)
		{
				
    		cout <<"S "<< ar1[i] << ' ' << ar2[i] << '\n';
    }
    k=0;
    for (std::map<int,int>::iterator it=buy.begin(); it!=buy.end()&&k<s; ++it,k++)
    cout <<"B "<< it->first << ' ' << it->second << '\n';
    return 0;
}
		
		
								
								
								
								
								
								
								
								
								
								
								
								
						
