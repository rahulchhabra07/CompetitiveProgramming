/*
ID: rahulch1
PROG: friend list
LANG: C++                  
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main() 
{
    ofstream fout ("listout.txt");
    ifstream fin ("listin.txt");
    long long n;
    fin>>n;
    n*=2;
    int ar[1001];
    for(long long i=0;i<=1000;i++)
    {
				ar[i]=0;
		}
		int a;
		for(long long i=1;i<=n;i++)
		{
				fin>>a;
				ar[a]++;
		}
		long max=0;
		for(long long i=0;i<=1000;i++)
		{
				if(ar[i]>max)
				{
						max=ar[i];
				}
		}
		for(long long i=0;i<=1000;i++)
		{
				if(ar[i]==max)
				{
						fout<<i<<'\n';
				}
		}
		return 0;
}
				
				
    					
