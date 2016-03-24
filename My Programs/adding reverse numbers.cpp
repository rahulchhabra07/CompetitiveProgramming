#include<iostream>
using namespace std;



int numrev(int n)
{
		int a=0;
		while(n)
		{
				a*=10;
				a+=n%10;
				n/=10;
		}
		return a;
}


int main()
{
		int tes,x,y;
		cin>>tes;
		for(int u=0;u<tes;u++)
		{
				cin>>x>>y;
				cout<<numrev(numrev(x)+numrev(y))<<endl;
		}
		return 0;
}
				
				
				
