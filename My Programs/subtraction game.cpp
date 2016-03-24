#include<iostream>
using namespace std;
 
 
long gcd(long a,long b)			//b is greater
{
		if(a>b)
		{
				a=a+b-(b=a);
		}
		if(!(b%a))
		{
				return a;
		}
		else
		{
				return gcd (b%a, a);
		}
}
 
 
 
 
 
 
int main()
{
		int tes;
		cin>>tes;
		for(int u=0;u<tes;u++)
		{	
				int n,g;
				cin>>n;
				long ar[n];
				cin>>ar[0];
				g=ar[0];
				for(int i=1;i<n;i++)
				{
						cin>>ar[i];
						if(g!=1)
						g=gcd(g,ar[i]);
				}
				cout<<g<<'\n';
		}
		return 0;
}