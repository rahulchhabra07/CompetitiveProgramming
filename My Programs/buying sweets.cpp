#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
		int tes;
		cin>>tes;
		for(int u=0;u<tes;u++)
		{
				int n, x;
				cin>>n>>x;
				int ar[n];
				for(int i=0;i<n;i++)
				{
						cin>>ar[i];
				}
				sort(ar,ar+n);
				int sum=0;
				for(int i=0;i<n;i++)
				{
						sum+=ar[i];
				}
				if(sum%x==0)
				{
						cout<<sum/x<<'\n';
				}
				else
				{
						if(sum<x)
						{
								cout<<-1<<'\n';
						}
						else
						{
								if((sum-ar[0])/x==sum/x)
								{
										cout<<-1<<'\n';
								}
								else
								{
										cout<<sum/x<<'\n';
								}
						}
				}
		}
		return 0;
}
