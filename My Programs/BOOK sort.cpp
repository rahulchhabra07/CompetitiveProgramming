#include<iostream>
using namespace std;
int main()
{
		long n;
		cin>>n;
		long ar[n];
		long ct=0;
		for(int i=0;i<n;i++)
		{
				cin>>ar[i];
				if(!i)
				{
						continue;
				}
				if(ar[i-1]>ar[i])
				{
						ct++;
				}
		}
		cout<<ct;
		return 0;
}
