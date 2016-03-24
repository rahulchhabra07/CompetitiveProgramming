#include<iostream>
using namespace std;
int main()
{
		int tes;
		cin>>tes;
		for(int u=0;u<tes;u++)
		{
				int n;
				cin>>n;
				int ar[n];
				int ct=0;
				for(int i=0;i<n;i++)
				{	
						int a;
						cin>>a;
						ct+=a/3;
				}
				cout<<ct<<'\n';
		}
		return 0;
}
						
