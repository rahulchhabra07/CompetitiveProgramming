#include<iostream>
using namespace std;
 int main()
{
		ios::sync_with_stdio(0);
		long long int tes;
		cin>>tes;
		for(long long int u=0;u<tes;u++)
		{
				long long int a, b;
				cin>>a>>b;
				long long int n;
				cin>>n;
				long long int fl=1;
				
				for(long long int i=0;i<n;i++)
				{
						long long int x,y;
						cin>>x>>y;
						if(((x>a&&x<b)||(y>a&&y<b)||(x<=a&&y>=b)||(x==a)||(y==b))&&fl)
						{
								cout<<"NO\n";
								fl=0;
						}
				}
				
				if(fl)
					cout<<"YES\n";
		}
		return 0;
}
				
