#include<iostream>
using namespace std;



struct m
{
		int a,b;
};


bool operator==(m a, m b)
{
		return((a.a==b.a)&&(a.b==b.b));
}



int main()
{	
		int n;
		cin>>n;
		m ar[n];
		int c=1;
		int ct=1;
		cin>>ar[0].a>>ar[0].b;
		for(int i=1;i<n;i++)
		{
				cin>>ar[i].a>>ar[i].b;
				if(ar[i]==ar[i-1])
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
				
				
