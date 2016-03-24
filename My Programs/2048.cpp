#include<iostream>
#include<cmath>
using namespace std;
int main()
{
		long long tes;
		long long n;
		cin>>tes;
		for(int u=0;u<tes;u++)
		{				
				cin>>n;
				long long ct=0;
				while(n>1)
				{
						ct+=n/2;
						n=n/2+n%2;
				}
				cout<<ct<<'\n';				
		}
		return 0;
}
