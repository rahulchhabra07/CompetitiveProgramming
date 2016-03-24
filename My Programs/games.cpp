#include<iostream>
using namespace std;
int main()
{
		int n;
		cin>>n;
		int ar[n],arr[n];
		for(int i=0;i<n;i++)
		{
				cin>>ar[i]>>arr[i];
		}
		int ct=0;
		for(int i=0;i<n;i++)
		{	
				for(int j=0;j<n;j++)
				{
						if(ar[i]==arr[j])
						{
								ct++;
						}
				}
		}
		cout<<ct;
		return 0;
}
