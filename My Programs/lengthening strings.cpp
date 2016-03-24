#include<bits/stdc++.h>
#typedef long long ll;
using namespace std;



struct triplet
{
		ll a[3];
		
		void order()
		{
				sort(a,a+3);
		}
};

		

set<triplet> sol;



count(ll a, ll b, ll c, ll l)
{
		triplet trip={a,b,c};
		trip.order();
		if(sol.find(trip)==sol.end())
		{
				a=trip.a[0];
				b=trim.a[1];
				c=trim.a[2];				
				for(int p=1;p<=l;p++)
				{
						if(a+p>b+c)
						{
								count(a+p,b,c,l-p);
						}
						if(a>b+p+c)
						{
								count(a,b+p,c,l-p);
								count(a,b,c+p,l-p);
						}
						if(b+p>a+c)
						{
								count(a,b+p,c,l-p);
						}
						if(c+p>a+b)
						{
								count(a,b,c+p,l-p);
						}
				}
				sol.insert(trip);
		}
}

int main()
{
		long long a,b,c,l;
		cin>>a>>b>>c>>l
		count(a,b,c,l)
		cout<<sol.size();
		return 0;
}
