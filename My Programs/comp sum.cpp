#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
		int tes;
		cin>>tes;
		for(int u=0;u<tes;u++)
		{
				unsigned long long d;
				cin>>d;
				d=((-1+sqrt(1+8*d))/2);
				cout<<d<<endl;
		}
		return 0;
}
				
				
