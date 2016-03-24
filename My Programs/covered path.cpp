#include<bits/stdc++.h>
using namespace std;
int d;
int vf;
int path(int dv,int t,int vf)
{
		if(t==0)
		{
				if(dv)
				{
						return INT_MIN;
				}
				else
				{
						return 0;
				}
		}
		int max=INT_MIN;
		for(int i=-d;i<=d;i++)
		{
				int a=path(dv+i,t-1,(vf+i))+vf;
				cout<<a<<endl;
				if(max<a)
				{
						max=a;
				}
		}
		return max;
}
int main()
{
		int v1,v2;
		cin>>v1>>v2;
		int t;
		cin>>t>>d;
		vf=v1;
		cout<<path(v1-v2,t,vf);
		return 0;
}
		
