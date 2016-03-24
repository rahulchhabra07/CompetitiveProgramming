#include<bits/stdc++.h>
using namespace std;
int main()
{
		int tes;
		cin>>tes;
		while(tes--)
		{
				string ar;
				map<string,long> m;
				pair<string,long> p;
				map<string,long>::iterator it;
				int total=0;
				do
				{
						getline(cin,ar);
						p.first=ar;
						map<it=find(m.begin(),m.end(),ar);
						if(it!=m.end())
						{
								p.second=(it->second)+1;
								m.erase(it);
						}
						else
						{
								p.second=1;
						}
						m.insert(p);
						total++;						
				}
				while(!ar.empty());
				map<string,long>::iterator t=m.begin();
				for(t=m.begin();t!=m.end();t++)
				{
						cout<<t->first<<' '<<setprecision(4)<<fixed<<(float(t->second)/float(total))*100.0<<'\n';
				}
				cout<<'\n';
		}
		return 0;
}
						
				
				
				
