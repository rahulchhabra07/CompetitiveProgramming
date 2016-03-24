#include<bits/stdc++.h>
using namespace std;

int main()
{
		long long sa,sb;
		cin>>sa>>sb;
		long long k,m;
		cin>>k>>m;
		long long a[sa],b[sb];
		for(long long i=0;i<sa;i++)
		{
				cin>>a[i];
		}
		for(long long i=0;i<sb;i++)
		{
				cin>>b[i];
		}
		//cout<<a[k-1]<<' '<<b[sb-m]<<endl;
		if(a[k-1]<b[sb-m])
		{
				cout<<"YES\n";
		}
		else
		{
				cout<<"NO\n";
		}
		return 0;
}

