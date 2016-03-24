#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;




struct cord
{
		int x,y;
}
c1,c2,c3;



double dist(cord a,cord b)
{
		return ((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}
		
		


int main()
{
		long tes,ct=0;
		cin>>tes;
		double ar[3];
		for(long u=0;u<tes;u++)
		{
				cin>>c1.x>>c1.y
					 >>c2.x>>c2.y
					 >>c3.x>>c3.y;
				ar[0]=dist(c1,c2);
				ar[1]=dist(c2,c3);
				ar[2]=dist(c3,c1);
				sort(ar,ar+3);
				if((ar[0])+(ar[1])==(ar[2]))
				ct++;
				//cout<<ct<<'\n';
		}
		cout<<ct;
		//system("pause");
		return 0;
}
					 
				
				