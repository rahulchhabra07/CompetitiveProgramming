#include<iostream>
using namespace std;
int main()
{
		int n;
		cin>>n;
		int ar[n];
		for(int i=0;i<n;i++)
		{
				cin>>ar[i];
		}
		int m=ar[0],mi=0;
		for(int i=0;i<n;i++)
		{
				if(ar[i]>m)
				{
						m=ar[i];
						mi=i;
				}
		}
		int l=ar[n-1],li=n-1;
		for(int i=n-1;i>=0;i--)
		{
				if(ar[i]<l)
				{
						l=ar[i];
						li=i;
				}
		}
		int ct=mi+n-1-li-(li<mi);
		cout<<ct;
		//system("pause");
		return 0;
}

		
					
						
		
		
