#include<bits/stdc++.h>
using namespace std;

void check(int x,int y)
{
		if(!x*y)
		{
				cout<<"divisa\n";
				return;
		}
		if(x>0)
		{
				if(y>0)
					cout<<"NO\n";
				else
					cout<<"SO\n";
		}
		return;
		if(y>0)
			cout<<"NE\n";
		else
			cout<<"SE\n";
}
		

int main()
{
		int k;
		while(cin>>k)
		{
				if(k==0)
					return 0;
				int n,m;
				cin>>n>>m;
				for(int u=0;u<k;u++)
				{
						int x,y;
						cin>>x>>y;
						x-=n;
						y-=m;
						check(x,y);
				}
		}
		//return 0;
}
