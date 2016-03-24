#include<iostream>
using namespace std;
int ar[300000];
int main()
{
		iostream::sync_with_stdio(false);
		long n,max=0,t;
		
		cin>>n;
		for(int i=0;i<n;i++)
		{
				cin>>ar[i];
				for(int j=0;j<i;j++)
				{
						t=ar[i]&ar[j];
						if(t>max)
						{
								max=t;
						}
				}
		}
		cout<<max;
		return 0;
}
						
