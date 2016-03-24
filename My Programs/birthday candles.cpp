#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
		int tes;
		cin>>tes;
		int ar[10];
		for(int u=0;u<tes;u++)
		{
				for(int i=0;i<10;i++)
				{
						cin>>ar[i];
						if(!i)
						{
								ar[i]++;
						}
						ar[i]=ar[i]*10+i;
				}
				sort(ar,ar+10);
				int k,m;
				k=ar[0]%10;
				m=ar[0]/10;
				if(k)
				{
						for(int i=0;i<=m;i++)
						{
								cout<<k;
						}
				}
				else
				{
						cout<<'1';
						for(int i=0;i<m;i++)
						{
								cout<<'0';
						}
				}
				cout<<'\n';
		}
		return 0;
}
		
