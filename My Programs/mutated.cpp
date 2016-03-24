#include<bits/stdc++.h>
using namespace std;
int main()
{
		int tes;
		cin>>tes;
		for(int u=1;u<=tes;u++)
		{
				int n,k,ct=0;
				cin>>n>>k;
				for(int i=0;i<n;i++)
				{
						int a;
						cin>>a;
						if((a+k)%7==0)
						{
								ct++;
						}
				}
				cout<<ct<<'\n';
		}
		return 0;
}
								
