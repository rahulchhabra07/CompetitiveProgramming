#include<iostream>
using namespace std;
int main()
{
		int tes;
		cin>>tes;
		for(int u=0;u<tes;u++)
		{
				int n,k,m=0;
				cin>>n>>k;
				int ar[n];
				for(int i=0;i<n;i++)
				{
						cin>>ar[i];
						m+=ar[i];
				}
				bool b[m+1];
				for(int i=0;i<=m;i++)
				{
						b[i]=0;
				}
				b[0]=1;
				for(int i=0;i<n;i++)
				{
						for(int j=m;j>=ar[i];j--)
						{
								b[j]|=b[j-ar[i]];
						}
				}
				if(k<=m&&b[k])
				{
						cout<<"Yes\n";
				}
				else
				{
						cout<<"No\n";
				}
		}
		return 0;
}
				
				
