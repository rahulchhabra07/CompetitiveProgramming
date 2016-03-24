#include<iostream>
#include<cmath>
using namespace std;
int main()
{
		int tes;
		cin>>tes;
		for(int u=0;u<tes;u++)
		{
				long n;
				cin>>n;
				for(int i=sqrt(n);i>=0;i--)
				{
						if(!(n%i))
						{
								cout<<abs((n/i)-i)<<'\n';
								break;
						}
				}
		}
		return 0;
}