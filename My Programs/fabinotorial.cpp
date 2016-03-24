#include<iostream>
#include<cmath>
using namespace std;
long double f(int n)
{
		long double ct=0;
		for(int i=1;i<n;i++)
		{
				ct+=i*log10(i);
		}
		return ct;
}
int main()
{
		int tes;
		cin>>tes;
		for(int u=0;u<tes;u++)
		{
				int n,q;
				long m;
				cin>>n>>m>>q;
				for(int v=0;v<q;v++)
				{
						int r;
						cin>>r;
						long double a;
						a=f(n)-(f(r)+f(n-r));
						long double b=0;
						long double p;
						p=(pow(long(10.0),a));
						while(a>1)
						{
								a+=log10(1-m/p);
						}
						a-=log10(1-p/m);
						p=(pow(long(10.0),a));
						cout<<p<<'\n';
				}
		}
		return 0;
}
