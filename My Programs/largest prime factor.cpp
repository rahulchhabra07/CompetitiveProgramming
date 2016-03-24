#include<bits/stdc++.h>
using namespace std;

bool isprime(long long a)
{
		for(long long i=2;i*i<=a;i++)
		{
				if(a%i==0)
				{
						return 0;
				}
		}
		return 1;
}
int main()
{
		long long n;
		cin>>n;
		long long prime=1;
		lb:
		for(long long i=2;i<=n;i++)
		{
				if(!(n%i))
				{
						if(isprime(i))
						{
								prime=i;
								cout<<prime<<'\n';
								n/=prime;
								goto lb;
						}
				}
		}
		cout<<'\n'<<prime;
		return 0;
}
		
