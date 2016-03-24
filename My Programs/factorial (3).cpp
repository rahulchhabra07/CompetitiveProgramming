#include<iostream>
using namespace std;
int main()
{
		long tes;
		cin>>tes;
		for(long u=0;u<tes;u++)
		{
				long n,ct=0;
				cin>>n;
				while(n)
				{
						ct+=n/5;
						n/=5;
				}
				cout<<ct<<endl;
		}
		return 0;
}
