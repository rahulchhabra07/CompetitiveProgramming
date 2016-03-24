#include<iostream>
using namespace std;




struct m
{
		int a,b;
};


int main()
{
		int n;
		cin>>n;
		m ar[n];
		for(int i=0;i<n;i++)
		{
				cin>>ar[i].a>>ar[i].b;
		}
		int c=1,start,stop;
		start=ar[0].a;
		stop=ar[0].b;
		int ct=1;
		for(int i=1;i<n;i++)
		{
				if(stop>ar[i].a)
				{
					ct++;
				}
				else
				{
						if(c<ct)
						{
								c=ct;
						}
						ct=1;
				}
		}
		cout<<c;
		return 0;
}
	
				
		
		
		
		
		
		
		
		
		
		
		
