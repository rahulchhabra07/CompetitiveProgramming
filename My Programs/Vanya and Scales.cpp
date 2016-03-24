#include<bits/stdc++.h>
using namespace std;
int main()
{
		long long w,m;
		cin>>w>>m;
		//int i=0;
		while(m)
		{
				//cout<<"done\n";
				if(m%w!=w-1&&m%w!=0&&m%w!=1)//&&i>=100)
				{
						cout<<"NO";
						return 0;
				}
				m/=w;
				//i++;
		}
		cout<<"YES";
		return 0;
}
