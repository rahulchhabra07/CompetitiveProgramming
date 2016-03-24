#include<iostream>
#include<algorithm>
using namespace std;
int main()
{	
		int m,n;
		cin>>m>>n;
		int ar[n];
		for(int i=0;i<n;i++)
		{
				cin>>ar[i];
		}
		sort(ar,ar+n);
		int s=0,max=0;
		s=ar[m-1]-ar[0];
		max=s;
		for(int i=m;i<n;i++)
		{
				s=ar[i]-ar[i-m+1];
				if(s<max)
				{
						max=s;
				}
		}
		cout<<max;
		return 0;
}
