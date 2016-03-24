#include<iostream>
#include<climits>
using namespace std;
long Min(long a, long b, long c)
{
		if(a<b)
		{
				if(a<c)
				return a;
				else
				return c;
		}
		if(b<c)
		return b;
		else
		return c;
}
int main()
{
		long tes;
		cin>>tes;
		for(long u=0;u<tes;u++)
		{	
				long n;
				cin>>n;
				long ar[n][n];
				for(long i=0;i<n;i++)
				{
						for(long j=0;j<n;j++)
						{
									cin>>ar[i][j];
						}
				}
				for(long i=n-2;i>=0;i--)
				{
						for(long j=0;j<n;j++)
						{
								long a,c;
								if(j>0)
								{
										a=ar[i+1][j-1];
								}
								else
								{
										a=LONG_MAX;
								}
								if(j<n-1)
								{
										c=ar[i+1][j+1];
								}
								else
								{
										c=LONG_MAX;			
								}					
								ar[i][j]+=Min(a,ar[i+1][j],c);
						}
						
				}
				
					
				long min=LONG_MAX;
				for(long i=0;i<n;i++)
				{	
						if(ar[0][i]<min)
						{
								min=ar[0][i];
						}
				}
				cout<<min<<endl;
		}
		return 0;
}
				
