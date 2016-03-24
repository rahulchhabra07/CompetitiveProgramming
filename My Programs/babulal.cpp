#include<iostream>
using namespace std;
int main()
{
		int tes;
		cin>>tes;		
		for(int v=0;v<tes;v++)
		{
				unsigned long long n;
				unsigned long long a=2,b=7,c=9,u;
				cin>>n;
				for(unsigned long long i=4;i<=40;i++)
				{
						u=a+2*b+c;
						a=b;
						b=c;
						c=u;
				}
				for(unsigned long long i=41;i<=n;i++)
				{
						u=(a+2*b+c)%(1000000007);
						a=b%(1000000007);
						b=c%(1000000007);
						c=u%(1000000007);
				}
				
				switch(n)
				{
						case 1: 
							cout<<2;
							break;
						case 2:
							cout<<7;
							break;
						case 3:
							cout<<9;
							break;
						default:
							cout<<u;//%(1000000007);
				}
				cout<<endl;
		}
		return 0;
}
