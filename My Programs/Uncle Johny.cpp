#include<iostream>
#include<algorithm>
using namespace std;
int main()
{	
		int tes;
		cin>>tes;
		for(int u=0;u<tes;u++)
		{
				int n;
				cin>>n;
				int ar[n];
				for(int i=0;i<n;i++)
				{
						cin>>ar[i];
				}
				int k;
				cin>>k;
				int s;
				s=ar[k-1];
				sort(ar,ar+n);
				for(int i=0;i<n;i++)
				{
						if(ar[i]==s)
						{
								cout<<i+1<<'\n';
								break;
						}
				}
		}
		return 0;
}
