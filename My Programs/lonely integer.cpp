#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
		int n;
		cin>>n;
		int ar[n];
		for(int i=0;i<n;i++)
		{
				cin>>ar[i];
		}
		sort(ar,ar+n);
		for(int i=0;i<n;i+=2)
		{	
				if(ar[i]!=ar[i+1])
				{
						cout<<ar[i];
						break;
				}
		}
		return 0;
}
