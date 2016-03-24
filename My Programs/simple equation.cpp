#include<bits/stdc++.h>
using namespace std;
int main()
{
		int n;
		cin>>n;		
		while(n--)
		{
				int sol=1;
				long a,b,c;
				cin>>a>>b>>c;
				for(int x=-100;x<=100&&sol;x++)
				{
						for(int y=x+1;y<=100&&sol;y++)
						{
								for(int z=y+1;z<=100&&sol;z++)
								{
										if(x+y+z==a&&x*y*z==b&&(x*x)+(y*y)+(z*z)==c&&sol)
										{
												cout<<x<<' '<<y<<' '<<z<<'\n';
												sol=0;
										}
								}
						}
				}
				if(sol)
				{
						cout<<"No solution.\n";
				}
		}
		return 0;
}
				
												
