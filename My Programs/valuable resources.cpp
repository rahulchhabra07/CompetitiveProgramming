#include<iostream>
#include<algorithm>
long long max(long long a,long long b)
{
		if(a>b)
		return a;
		return b;
}
using namespace std;
int main()
{
		long long n;
		cin>>n;
		long long a[n],b[n];
		for(long long i=0;i<n;i++)
		{
				cin>>a[i]>>b[i];
		}
		sort(a,a+n);
		sort(b,b+n);
		cout<<(max(a[n-1]-a[0],b[n-1]-b[0]))*(max(a[n-1]-a[0],b[n-1]-b[0]))		;
		return 0;
}
		
