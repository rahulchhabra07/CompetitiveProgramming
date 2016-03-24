#include<bits/stdc++.h>
using namespace std;
int main()
{
		char ar[55];
		while(1)
		{
				cin>>ar;
				if(!strcmp("#",ar)) break;
				if(next_permutation(ar,ar+strlen(ar)))
				{
						cout<<ar;
				}
				else
				{
						cout<<"No Successor";
				}
				cout<<'\n';
		}
		return 0;
}
