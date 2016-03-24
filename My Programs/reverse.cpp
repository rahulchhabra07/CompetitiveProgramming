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
int main()
{
		int tes;
		cin>>tes;
		for(int u=0;u<tes;u++)
		{
				long a,b;
				cin>>a>>b;
				cout<<rev(rev(a)+rev(b))<<'\n';
		}
		return 0;
}
