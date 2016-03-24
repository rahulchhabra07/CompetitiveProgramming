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
				long ar[n];
				for(int i=0;i<n;i++)
				{
						cin>>ar[i];
				}
				sort(ar,ar+n);
				long min= 1000000000;
				for(int i=0;i<n-1;i++)
				{
						if(min>(ar[i+1]-ar[i]))
						{
								min=ar[i+1]-ar[i];
						}
				}
				cout<<min<<'\n';
		}
		return 0;
}
