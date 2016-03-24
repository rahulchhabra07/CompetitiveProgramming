#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
		int ct=0;
		for(ll i=0;i<int(pow(2.0,5.0));i++)
		{
				for(int j=0;j<5;j++)
				{
						if(i>>j&1)
						{
								cout<<j;
						}
				}
				cout<<'\n';
				ct++;
		}
		cout<<ct;
		return 0;
}
	
