#include<bits/stdc++.h>
using namespace std;
int main()
{
		long tes;
		cin>>tes;
		for(long u=1;u<=tes;u++)
		{
				long n,m,p;
				vector<long> v;
				cin>>n>>m>>p;
				int ar[n][m];
				for(int i=0;i<n;i++) for(int j=0;j<m;j++)
				{
						long a;
						cin>>a;
						if(i>0) a+=ar[i-1][j];
						if(j>0) a+=ar[i][j-1];
						if(i>0&&j>0) a-=ar[i-1][j-1];
				}
				long max=LONG_MIN;
				for(int i=0;i<n;i++) for(int j=0;j<m;j++)
				for(int k=i;k<n;k++) for(int l=j;l<j;l++)
				{
						long a=ar[k][l];
						if(i>0) a-=ar[i-1][j];
						if(j>0) a-=ar[i][j-1];
						if(i>0&&j>0) a+=ar[i-1][j-1];
						if(a<=p&&max<((k-i)+1)*((l-j)+1))
						{
								//clear all elements of v;
								//enter the price of the chosen land
						}
						if(a<=p&&max==((k-i)+1)*((l-j)+1))
						{
								v.push_back(a);
						}
				}
				long t=LONG_MAX;
				for(int i=0;i<int(v.size());i++)
				{
						if(t>v[i])
						{
								t=v[i];
						}
				}
				cout<<"Case "<<u<<": "<<max<<' '<<t<<'\n';
		}
		return 0;
}
								
				
