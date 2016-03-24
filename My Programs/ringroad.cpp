#include<bits/stdc++.h>
using namespace std;
int main()
{
		long long m,n;
		cin>>n>>m; 
		long long sum=0;
		long long t=1;
		for(long long i=0;i<m;i++)
		{
				long long a;
				cin>>a;
				if(a>=t)
				{
						sum+=a-t;
				}
				else
				{
						sum+=((n-t)+a);
				}
				t=a;
		}
		cout<<sum<<'\n';
		return 0;
}
				
