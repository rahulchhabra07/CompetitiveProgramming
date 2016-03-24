#include<iostream>
using namespace std;
int main()
{
		while(!cin.eof())
		{
				int a,b;
				cin>>a>>b;
				cout<<a<<' '<<b<<' ';
				int m=0,ct,n;
				for(int i=a;i<=b;i++)
				{
						ct=1;
						n=i;
						while(n!=1)
						{
								if(n%2)
								{
										n=(3*n)+1;
								}
								else
								{
										n/=2;
								}
								ct++;
						}
						if(ct>m)
						{
								m=ct;
						}
				}
				cout<<m<<endl;
		}
		return 0;
}		
						
