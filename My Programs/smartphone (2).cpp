#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
		long long n;
		cin>>n;
		long long ar[n];
		for(long long i=0;i<n;i++)
		{
				cin>>ar[i];
		}
		sort(ar,ar+n);
		for(long long i=0;i<n;i++)
		{
				ar[i]*=(n-i);
		}
		long long max=0;
		for(long long i=0;i<n;i++)
		{
				if(max<ar[i])
				{
						max=ar[i];
				}
		}
		cout<<max;
		return 0;
}
		
