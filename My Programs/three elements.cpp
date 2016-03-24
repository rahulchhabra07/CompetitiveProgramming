#include<bits/stdc++.h>
using namespace std;
int main()
{
		int tes;
		cin>>tes;
		for(int u=1;u<=tes;u++)
		{
				int n;
				cin>>n;
				int ar[n];
				for(int i=0;i<n;i++)
				{
						cin>>ar[i];
				}
				int max=INT_MIN;
				for(int i=0;i<n;i++)
				{	
						for(int j=0;j<n,j!=i;j++)
						{
								for(int k=0;k<n,k!=i,k!=j;k++)
								{
										if(ar[i]+ar[j]+ar[k]>max)
										{
												max=ar[i]+ar[j]+ar[k];
										}
								}
						}
				}
				cout<<"Case "<<u<<": "<<max<<'\n';
		}
		return 0;
}
