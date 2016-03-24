#include<bits/stdc++.h>
using namespace std;
int main()
{
		int n;
		while(cin>>n,n)
		{
				map<set<int>, int> m;
				map<set<int>, int>::iterator it;
				while(n--)
				{
						int a;
						set<int> s;
						for(int i=0;i<5;i++)
						{
								cin>>a;
								s.insert(a);
						}
						it=m.find(s);
						int ct=1;
						if(it!=m.end())
						{
									pair<set<int>, int> p=*it;
									p.second++;
									m.erase(it);
									m.insert(p);
						}
						else
						{
								  pair<set<int>, int> p;
								  p.first=s;
								  p.second=ct;
								  m.insert(p);
						}
				}
				int max=INT_MIN;
				for(it=m.begin();it!=m.end();it++)
				{
						if(it->second>max)
						{
								max=it->second;
						}
				}
				int count=0;
				for(it=m.begin();it!=m.end();it++)
				{
						if(it->second==max)
						{
								count+=it->second;
						}
				}				
				cout<<count<<'\n';
		}
		return 0;
}
							
								  
						
						
