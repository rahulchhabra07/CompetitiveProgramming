#include<iostream>
using namespace std;
long max(long a,long b)
{
		if(a>b)
		return b;
		return a;
}
long max(long a,long b,long c)
{
		return max(a,max(b,c));
}
						
int main()
{
		long n;
		cin>>n;
		long ar[n],p[n];
		for(long i=0;i<n;i++)
		{
				cin>>ar[i];
		}
		p[0]=ar[0];
		p[1]=ar[1];
		p[2]=ar[2];
		for(int i=3;i<n;i++)
		{
				p[i]=max(ar[i]+p[i-3],p[i-1],p[i-2]);
				cout<<p[i]<<endl;
		}
		long long sum=0;
		for(long i=0;i<n;i++)
		{
				sum+=ar[i];
		}/*
		long long ct=max(p[n-1],p[n-2],p[n-3]);		
		cout<<sum-ct;*/
		system("pause");
		return 0;
}
				
