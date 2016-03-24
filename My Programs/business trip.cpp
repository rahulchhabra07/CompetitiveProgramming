#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
		int n, ar[12];
		cin>>n;
		for(int i=0;i<12;i++)
		{
				cin>>ar[i];
		}
		sort(ar,ar+12);
		int i=0;
		while(n>0&&i<=11)
		{
				n-=ar[11-i];
				i++;
		}
		if(n<=0)
		{
				cout<<i;
		}
		else
		{
				cout<<-1;
		}
		return 0;
}
				
				
		
