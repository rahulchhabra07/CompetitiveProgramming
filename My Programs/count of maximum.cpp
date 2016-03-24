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
				int max=0,ct=1,x=ar[0],y=x;
				for(int i=1;i<n;i++)
				{
						if(ar[i]==x)
						{
								ct++;
						}
						else
						{
								if(ct>max)
								{
										max=ct;
										y=x;
								}
								ct=1;
								x=ar[i];
								
						}
				}
				if(ct>max)
				{
						max=ct;
						y=x;
				}
				cout<<y<<' '<<max<<'\n';
		}
		return 0;
}										
