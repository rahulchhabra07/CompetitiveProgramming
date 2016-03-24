#include<bits/stdc++.h>
using namespace std;
int main()
{
		int n;
		
		while(cin>>n,n)
		{
				
				int fl=1;
				for(int i=0;i<n;i++)
				{
						int a;
						cin>>a;
						if(a)
						{	
								fl=0;
								cout<<a;
								if(i!=n-1)
								{
										cout<<' ';
								}
						}
						
				}
				if(fl)
				{
						cout<<0;
				}
				
						
						cout<<'\n';
				
		}
		return 0;
}

						
