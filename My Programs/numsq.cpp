/*

PROG: numsq 
LANG: C++                  
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;




int max(int a,int b)
{
		if(a>b)
		{
				cout<<a;
		}
		else
		{
				return b;
		}
}




int max(int a, int b, int c)
{
		return max(max(a,b),c);
}


int main() 
{
    ofstream fout ("numsq.out");
    ifstream fin ("numsq.in");
    int m,n;
    fin>>m>>n;
    int ar[m][n];
    for(int i=0;i<m;i++)
    {
				for(int j=0;j<n;j++)
				{
						fin>>ar[i][j];
				}
		}
		for(int i=m-1;i>=1;i--)
		{
				for(int j=0;j<n;j++)
				{
						if(j==0)
						{
								ar[i-1][0]=max(ar[i][0],ar[i][1]);
								continue;
						}
						if(j==n-1)
						{
								ar[i-1][n-1]+=max(ar[i-1][n-1],ar[i-1][n-2]);
								continue;
						}
						ar[i-1][j]+=max(ar[i-1][j-1],ar[i-1][j],ar[i-1][j+1]);
				}
		}
		int max=0;
		for(int i=0;i<n;i++)
		{
				if(max<ar[0][i])
				{
						max=ar[0][i];
				}
		}
		fout<<max<<endl;
		return 0;
}
				
						
								
    
