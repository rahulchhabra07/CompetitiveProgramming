#include<iostream>
using namespace std;


int gcd(int a,int b)			//b is greater
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
				int ar[n];
				cin>>ar[0];
				g=ar[0];
				for(int i=1;i<n;i++)
				{
						cin>>ar[i];
						if(g!=1)
						{
								g=gcd(g,ar[i]);
						}						
				}
				for(int i=0;i<n;i++)
				{
						cout<<ar[i]/g<<' ';
				}
				cout<<'\n';
		}
		return 0;
}
