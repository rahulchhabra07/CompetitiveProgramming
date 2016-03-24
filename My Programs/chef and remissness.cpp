#include<iostream>
using namespace std;



long max(long a, long b)
{
		if(a>b)
		return a;
		else
		return b;
}


int main()
{
		int tes;
		cin>>tes;
		for(int u=0;u<tes;u++)
		{
				long a, b;
				cin>>a>>b;
				cout<<max(a,b)<<' '<<a+b<<'\n';
		}
		return 0;
}
