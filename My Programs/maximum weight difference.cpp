#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
		int tes;
		cin>>tes;
		for(int u=0;u<tes;u++)
		{
				int n,k;
				cin>>n>>k;
				long ar[n];
				for(int i=0;i<n;i++)
				{
						cin>>ar[i];
				}
				sort(ar,ar+n);
				long long ts=0,as=0,bs=0;
				for(int i=0;i<n;i++)
				{
						ts+=ar[i];
						if(i<k)
						{
								as+=ar[i];
						}
						if(i>=(n-k))
						{
								bs+=ar[i];
						}
				}
				cout<<max(abs(ts-(2*as)),abs(ts-(2*bs)))<<'\n';
		}
		return 0;
}
				
						