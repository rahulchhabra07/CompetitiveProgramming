#include<iostream>
#include<cmath>
using namespace std;
int main()
{
		int n,x,y,m;
		cin>>n>>x>>y;
		m=ceil(double(y*n)/100)-x;
		cout<<m;
		return 0;
}
		
