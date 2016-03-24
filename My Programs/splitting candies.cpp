#include<iostream>
using namespace std;
int main()
{
		int tes;
		cin>>tes;
		for(int u=0;u<tes;u++)
		{	
				long long n,k;
				cin>>n>>k;
				if(!k)
				{
						cout<<0<<' '<<n<<'\n';
						continue;
				}
				if(n/k)
				cout<<n/k;
				else
				cout<<0;
				cout<<' ';
				if(n%k)
				cout<<n%k;
				else
				cout<<0;
				cout<<'\n';
		}
		return 0;
}
				
