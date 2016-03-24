#include<iostream>
#include<queue>
#include<deque>
using namespace std;






int main()
{
		int tes;
		cin>>tes;
		for(int u=0;u<tes;u++)
		{	
				int n,r;
				cin>>n>>r;
				vector<int> q;
				for(int i=0;i<r;i++)
				{
						int v;
						int d;
						cin>>v>>d;
						if(v==1)
						{
								vector<int>::iterator ind=find(q.begin(),q.end(),d);
								if(ind!=q.end())
								{
										q.erase(ind);
										q.push_back(d);
								}
								else
									q.push_back(d);
								if(q.size()==n)
										q.erase(q.begin());
						}
						else
						{
								if(find(q.begin(),q.end(),d)!=q.end())
									cout<<"YES\n";
								else
									cout<<"NO\n";	
						}
				}
		}
		return 0;
}
