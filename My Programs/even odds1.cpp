#include<iostream>
using namespace std;
int main()
{
		long long n,k,l;
		cin>>n>>k;
		l=(n/2)+(n%2);
		if(k>l)
		{
				k-=l;
				cout<<k*2;
		}
		else
		{
				cout<<(2*k)-1;
		}
		return 0;
}
				
