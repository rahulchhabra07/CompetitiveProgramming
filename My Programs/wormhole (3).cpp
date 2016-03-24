/*
ID: rahulch1
PROG: wormhole
LANG: C++                  
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#define max_n 12
long long n;
long long partner[max_n+1];
long long x[max_n+1],y[max_n+1];
long long nextright[max_n+1];



bool cycle()
{
		long long pos;
		for(long long start=1;start<n+1;start++)
		{
				pos=start;
				for(long long i=0;i<n;i++)
				{
						pos=nextright[partner[pos]];
				}
				if(pos!=0)							//cycle there
				{
						return 1;
				}
	  }
		return 0;
		//return 1;
}


long long solve()
{
		long long total=0;
		long long i;
		for(i=1;i<n+1;i++)
		{
				if(partner[i]==0)			//anything left unpaired
				{
						break;
				}
		}
		if(i==n+1)						//all paired
		{
				if(cycle())
				{
						return 1;
				}
				else
				{
						return 0;
				}
		}	
		for(long long j=i+1;j<n+1;j++)
		{
				if(partner[j]==0)
				{
						partner[i]=j;
						partner[j]=i;
						total+=solve();
						partner[i]=partner[j]=0;
				}
		}
		return total;
}


using namespace std;
int main() 
{
    ofstream fout ("wormhole.out");
    ifstream fin ("wormhole.in");
    fin>>n;
    for(long long i=1;i<=n;i++)
    {
    		fin>>x[i]>>y[i];
    		//fout<<x[i]<<' '<<y[i]<<'\n';
    }
    for(long long i=1;i<n+1;i++)
    {
    		for(long long j=1;j<n+1;j++)
    		{
    				if((x[j]>x[i])&&(y[j]==y[i]))
						{
								if((x[nextright[i]]>x[j])||(nextright[i]==0))
    						{
    								nextright[i]=j;
    						}
    				}
    		}
    }
    fout<<solve();
    fout<<'\n';
    return 0;
}
    		
    		
    		
    		
    		
    
    
    
    
    					
