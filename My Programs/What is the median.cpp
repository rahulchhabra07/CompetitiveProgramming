#include<bits/stdc++.h>
using namespace std;
int main()
{
		vector<long> v;
		long n;
		while(cin>>n)
		{
				v.push_back(n);

				long sz=v.size();
				sort(v.begin(),v.end());
				if((sz%2))
				{
						cout<<(v[sz/2]);
				}
				else
				{
						cout<<(v[sz/2]+v[(sz/2)-1])/2;
				}
				cout<<'\n';
		}
		return 0;
}
				
