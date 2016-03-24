#include<bits/stdc++.h>
using namespace std;
int main()
{
		vector<int> a(3),b(2);
		int x,y,z,s,t;
		while(cin>>x>>y>>z>>s>>t&&x)
		{
				a.push_back(x);
				a.push_back(y);
				a.push_back(z);
				b.push_back(s);
				b.push_back(t);
				int lost=0;
				sort(a.begin(),a.begin()+3);
				sort(b.begin(),b.begin()+2);
				if(b[1]<a[2])
				{
						lost++;
						a.erase(upper_bound(a.begin(),a.begin()+3,*(b.begin()+1)));
						b.erase(b.begin()+1);
				}
				else
				{
						a.erase(a.begin());
						b.erase(b.begin()+1);
				}
				sort(a.begin(),a.begin()+2);
				sort(b.begin(),b.begin()+1);
				if(b[0]<a[1])
				{
						lost++;
						a.erase(upper_bound(a.begin(),a.begin()+2,*b.begin()));
						b.erase(b.begin());
				}
				else
				{
						a.erase(a.begin());
						b.erase(b.begin());
				}
				int ans=*(a.begin())+1;
				if(lost==2)
				{
						cout<<-1;
						continue;
				}
				while(!(ans!=x&&ans!=y&&ans!=z&&ans!=s&&ans!=t&&ans<52))
				{
						ans++;
				}
				if((ans!=x&&ans!=y&&ans!=z&&ans!=s&&ans!=t&&ans<52))
				{
						cout<<ans;
						continue;;
				}
				cout<<-1;
		}
		return 0;
}
						
				
				
				
				
				
				
				
