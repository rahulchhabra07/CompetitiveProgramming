#include<iostream>
#include<cmath>
using namespace std;
int main()
{
		iostream::sync_with_stdio(false);
		long long ct=0;
		long n;
		cin>>n;
		long ar[n];
		for(int i=0;i<n;i++)
		{
				cin>>ar[i];
				for(int j=i;j>=0;j--)
				{
						ct+=abs(ar[i]-ar[j]);
				}
		}
		cout<<ct;
		return 0;
}
				
