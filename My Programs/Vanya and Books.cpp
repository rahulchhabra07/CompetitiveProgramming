#include<bits/stdc++.h>
using namespace std;
int main()
{
		long long n;
		cin>>n;
		long long ct=0;
		long long tot=10;
		int po=1;
		while(tot<=n)
		{
				po++;
				tot*=10;
		}
		tot/=10;
		po--;
		if(n>=10)
		{
				ct+=((n%tot)+1)*(po+1);
		}
		else
		{
				ct=n;
		}
		tot--;
		int i=1;
		while(tot)
		{
				long long k=long ( pow ( 10.0, int ( po - 1 ) ) ) ;
				k=tot%k;
				ct+=k*i;
				i++;
				cout<<k<<endl;
				tot-=k;
		}				
		cout<<po<<' '<<tot<<endl;
		cout<<ct;
		return 0;
}
	
