#include<iostream>
using namespace std;
long rev(long n)
{
		long ct=0;
		while(n)
		{
				ct*=10;
				ct+=n%10;
				n/=10;
		}
		return ct;
}
int pal(long a)
{	
		return !(rev(a)==a);
}
		
int main()
{
		int tes;
		cin>>tes;
		for(int u=0;u<tes;u++)
		{
				long a;
				cin>>a;
				int i=0;
				while(pal(a))
				{
						a+=rev(a);
						i++;
				}
				cout<<i<<' '<<a<<'\n';
		}
		return 0;
}
