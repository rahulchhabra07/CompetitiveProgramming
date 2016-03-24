#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{	
		long n,k;
		cin>>n>>k;
		long ar[n];
		for(long i=0;i<n;i++)
		{
				cin>>ar[i];
		}
		long s=0;
		for(int i=0;i<k;i++)
		{
				s+=ar[i];
		}
		long m[n];
		m[k-1]=s;
		
		for(int i=k;i<n;i++)
		{
				s=0;
				for(int j=(i-k)+1;j<=i;j++)
				{
						s+=ar[j];
				}
				m[i]=max(m[i-1]+ar[i],s);
		}
		long x=INT_MIN;
		for(int i=k-1;i<n;i++)
		{
				if(m[i]>x)
				{
						x=m[i];
				}
		}
		cout<<x;
		return 0;
}
				
				
		
