#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
		int n,k;
		cin>>n>>k;
		int ar[n];
		for(int u=0;u<k;u++)
		{
				for(int i=0;i<n;i++)
				{
						cin>>ar[i];
				}
				next_permutation(ar,ar+n);
				for(int i=0;i<n;i++)
				{
						cout<<ar[i]<<' ';
				}
				cout<<'\n';
		}
		return 0;
}
		
