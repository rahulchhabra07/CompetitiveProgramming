#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
		long n;
		int m;
		cin>>n>>m;
		long ar[m];
		for(int i=0;i<m;i++)
		{
				cin>>ar[i];
		}
		sort(ar,ar+m);
		if(ar[0]==1||ar[m-1]==n)
		{
				cout<<"NO";
				return 0;
		}
		for(int i=2;i<m;i++)
		{
				if(ar[i]-ar[i-2]==2)
				{
						cout<<"NO";
						return 0;
				}
		}
		cout<<"YES";
		return 0;
}
		
