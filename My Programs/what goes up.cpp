#include<bits/stdc++.h>
using namespace std;
int main()
{
		int tes;
		cin>>tes;
		int a;
		vector<int> v;
		while(tes--)
		{
				cin>>a;
				v.push_back(a);
		}
		vector<int> l;
		l.push_back(v[0]);
		for(int i=1;i<int(v.size());i++)
		{
				vector<int>::iterator it=upper_bound(l.begin(),l.end(),v[i]);
				if(it==l.end())
				{
						l.push_back(v[i]);
				}
				else
				{	
						*it=v[i];
				}
		}
		cout<<l.size()<<"\n-\n";
		for(int i=0;i<int(l.size());i++)
		{
				cout<<l[i]<<'\n';
		}
		return 0;
}
				
