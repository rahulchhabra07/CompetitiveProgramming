#include<iostream>
using namespace std;
int main()
{
		int n;
		cin>>n;
		int a,b;
		int ct=1;
		cin>>a;
		for(int i=1;i<n;i++)
		{
				cin>>b;
				ct+=(a!=b);
				a=b;
		}
		cout<<ct;
		return 0;
}
			
