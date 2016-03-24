#include<bits/stdc++.h>
using namespace std;
int main()
{
		int ar[15];
		for(int i=0;i<15;i++)
		{
				ar[i]=i+1;
		}
		long long count=0,total=0;
		while(next_permutation(ar,ar+5))
		{
				total++;
				for(int i=0;i<4;i++)
				{
						if(ar[i+1]==ar[i]+1)
						{
								count++;
								break;
						}
				}
		}
		cout<<total-count;
		return 0;
}
