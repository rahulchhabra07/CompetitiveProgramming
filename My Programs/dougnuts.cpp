#include<iostream>
using namespace std;
int main()
{
		int tes;
		cin>>tes;
		for(int u=0;u<tes;u++)
		{
				int n,m;
				cin>>n>>m;
				int ar[m];
				sort(ar,ar+m);
				if(m==1)
				{
						cout<<0<<'\n';
						continue;
				}
				if(m==2)
				{
						cout<<1<<'\n';
						continue;
				}
				if(m>3)
				{
						int ct=0;
						while(m>1)
						{
								if(ar[0]==1)
								{
										m-=2;
										ct++;
										for(int i=1;i<m-1;i++)
										{
												ar[i-1]=ar[i];
										}
								}
								else
								{
										m=1;
										ct+=(m-1)
								}
						}
						cout<<ct<<'\n';
				}
		}				
		return 0;
}
