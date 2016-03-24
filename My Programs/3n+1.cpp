#include<iostream>
using namespace std;


long long l(long long n)
{
		if(n==1)
		{
				return 1;
		}
		if(n%2)
		{
				return 1+l(3*n+1);
		}
		else
		{
				return 1+l(n/2);
		}
}


int main()
{
		long long i,j,k,max=0,f,g;
		while(cin>>i>>j)
		{
				//cin>>i>>j;
				f=i;
				g=j;
				if(i>j)
				{
						long long temp;
						temp=i;
						i=j;
						j=temp;
				}
				max=0;
				for(long long a=i;a<=j;a++)
				{
						k=l(a);
						if(k>max)
						{
								max=k;
						}
				}
				cout<<f<<' '<<g<<' '<<max<<'\n';
		}	
		return 0;
}
						
