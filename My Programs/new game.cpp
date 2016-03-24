#include<bits/stdc++.h>
using namespace std;

int testbit(int a,int b, int n)
{
		if(a<b)
			swap(a,b);
		int k=0;
		while(n)
		{
				if((a%2)!=(b%2))
					k++;
				b/=2;
				a/=2;
				n--;
				//cout<<a<<' '<<b<<' '<<k<<endl;
		}
		return k;
}

int main()
{
		int n,m,k;
		cin>>n>>m>>k;
		int ar[m];
		for(int i=0;i<=m;i++)
		{
				cin>>ar[i];
		}
		int me=ar[m];
		int ct=0;
		for(int i=0;i<m;i++)
		{
				if(i==m)
					continue;
				if(testbit(me,ar[i],n)<=k)
					ct++;
				//cout<<ar[i]<<' '<<ct<<endl;
		}
		cout<<ct<<'\n';
		return 0;
}

