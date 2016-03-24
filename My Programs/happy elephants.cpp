#include<iostream>
using namespace std;
int main()
{
		int tes;
		cin>>tes;
		for(int u=0;u<tes;u++)
		{
				int n;
				long a;
				long long c;
				cin>>n>>c;
				while(n>0)
				{
						cin>>a;
						c-=a;
						n--;
				}
				if(c>=0)
				{
						cout<<"Yes\n";
				}
				else
				{
						cout<<"No\n";
				}
		}
		return 0;
}
						
