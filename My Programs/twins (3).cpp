#include<iostream>
#include<algorithm>
using namespace std;




int mf(int a,int b)
{
		return a>b;
}

int main()
{
		int n;
		cin>>n;
		int ar[n];
		for(int i=0;i<n;i++)
		{
				cin>>ar[i];
		}
		
		sort(ar,ar+n,mf);
		int s=0;
		float sum=0;
		for(int i=0;i<n;i++)
		{
				sum+=ar[i];
		}
		int i=0;
		while(s<=sum/2)
		{
				s+=ar[i];
				i++;
		}
		cout<<i;
		return 0;
}
		
				
		
		
