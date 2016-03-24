#include<bits/stdc++.h>
using namespace std;
int main()
{
		int ar[6];
		while(cin>>ar[0])
		{
				int ct=0;
				int tot=0;
				ct+=ar[0];
				tot+=ar[0];
				for(int i=1;i<6;i++)
				{	
						cin>>ar[i];
						ct+=ar[i];
						tot+=ar[i]*(i+1)*(i+1);
				}
				if(!ct) return 0;
				ct=ceil(float(tot)/36);
				cout<<ct<<'\n';
		}
}
