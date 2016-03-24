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
				int cr[n],rr[n];
				for(int i=0;i<n;i++)
				{
						cin>>cr[i];
				}
				for(int i=0;i<n;i++)
				{
						cin>>rr[i];
				}
				sort(cr,cr+n);
				sort(rr,rr+n);
				int m;
				m=n;
				for(int i=0,j=0;j<n;i++,j++)			//to be edited
				{
						if(cr[i]>rr[j])
						{
								i--;
								m--;
						}
				}
				cout<<m<<'\n';
		}
		return 0;
}
						
						
				
