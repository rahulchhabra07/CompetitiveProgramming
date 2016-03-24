#include<bits/stdc++.h>
using namespace std;
int main()
{
		int n,m;
		cin>>n>>m;
		int ar[m];
		for(int i=0;i<m;i++)
		{
				cin>>ar[i];
		}
		sort(ar,ar+m);
		int diff=INT_MAX;
		for(int i=0;i<=m-n;i++)			//check if off by one
		{
				if(ar[i+n-1]-ar[i]<diff)
					diff=ar[i+n-1]-ar[i];
		}
		cout<<diff;
		return 0;
}
