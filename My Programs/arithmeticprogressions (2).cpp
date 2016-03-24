/*
ID: rahulch1
PROG: ariprog
LANG: C++                  
*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <set>

using namespace std;


bool ar[1+(2*250*250)]={0};
set<long> v;



int main() 
{
    ofstream fout ("ariprog.out");
    ifstream fin ("ariprog.in");
    int n,m;
    fin>>n>>m;
    n--;
    for(int i=0;i<=m;i++)
    {
    		for(int j=i;j<=m;j++)
    		{
    				ar[i*i+j*j]=1;
    				v.insert(i*i+j*j);
    		}
    }
    long max=2*m*m;
    long maxd=max/(n-1);
    long ct=0;
    for(long d=1;d<=maxd;d++)
    {
    		for(set<long>::iterator it=v.begin();it!=v.end();it++)	
    		{
    				if(((*it+((n-1)*d))<=max))			
    				{
    						bool flag=1;
    						for(int i=1;i<n+1;i++)
    						{
    								if(!ar[*it+(i*d)])
    								{
    										flag=0;
    										break;
    								}
    						}
    						if(flag)
								{
										fout<<*it<<' '<<d<<'\n';
										ct++;
								}
    				}
    		}
    }
    if(ct==0)
    {
    		fout<<"NONE\n";
    }
    return 0;
}
    				
    		
    		
    		
    		
    		
    		
    		
    		
    		
    		
    		
    					
