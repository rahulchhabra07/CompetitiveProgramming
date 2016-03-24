#include<bits/stdc++.h>
using namespace std;
int main()
{
		int tes;
		cin>>tes;
		while(tes--)
		{
				int n,m;
				cin>>n>>m;
				//vector<bool> v(1<<n);
				int ar[1<<n];
				for(int i=0;i<n;i++)
				{
					 //v[i]=1;
					 ar[i]=1;
				}
				int ct=0;
				for(int i=0;i<m;i++)
				{
						int a;
						cin>>a;
						//v[a]=0;
				}
				while(n)
				{
						for(int i=0;i<(1<<(n-1));i++)
						{
								if(ar[i<<1]&&ar[(i<<1)+1])
								{
										ar[i<<1]=ar[(i<<1)+1]=1;
								}
								else
								{
										if(ar[i<<1]||ar[(i<<1)+1])
										{	
												ct++;
												ar[i<<1]=ar[(i<<1)+1]=1;
										}
										else
										{
												ar[i]=0;
												ar[i<<1]=ar[(i<<1)+1]=1;
										}
								}
						}
						n/=2;
				}
				cout<<ct<<'\n';
		}
		return 0;
}
						
						
