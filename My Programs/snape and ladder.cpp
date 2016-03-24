#include<iostream>
#include<cmath>
using namespace std;
int main()
{
		int tes;
		cin>>tes;
		for(int u=0;u<tes;u++)
		{
				int b, ls;
				cin>>b>>ls;
				double minrs, maxrs;
				minrs=sqrt((ls*ls)-(b*b));
				maxrs=sqrt((ls*ls)+(b*b));
				cout<<minrs<<' '<<maxrs<<'\n';
		}
		return 0;
}