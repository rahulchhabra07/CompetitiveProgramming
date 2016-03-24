#include<iostream>
#include<cmath>
#include<limits>
using namespace std;
long long ar[1000];
int main()
{
		int tes;
		cin>>tes;
		for(int u=0;u<tes;u++)
		{
				long long n,k,t,ct;
				long long min=numeric_limits<long long>::max();
				cin>>n>>k;
				for(int i=0;i<n;i++)
				{	
						cin>>ar[i];
						for(int j=0;j<i;j++)
						{
								t=abs(ar[i]+ar[j]-k);
								if(t<min)
								{	
										min=t;
										ct=0;
								}
								if(t==min)
								{
										ct++;
								}
						}
				}
				cout<<t<<' '<<ct<<'\n';
		}
		return 0;
}
								
				
