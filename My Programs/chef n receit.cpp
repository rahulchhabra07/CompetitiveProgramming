#include<iostream>
using namespace std;
int main()
{
		int tes;
		cin>>tes;
		for(int u=0;u<tes;u++)
		{
				long n;
				cin>>n;
				int ct=0;
				int l;
				l=n%2048;
				for(int i=0;i<=12;i++)
				{
						if(l&(1<<i))
						{
								ct++;
						}
				}
				cout<<ct+(n/2048)<<'\n';
		}
		return 0;
}
		
