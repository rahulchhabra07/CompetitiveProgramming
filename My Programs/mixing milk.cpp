/*
ID: rahulch1
PROG: milk
LANG: C++                  
*/
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;



struct man
{
		int p;
		unsigned long c;
};



bool operator<(const man& a,const man &b)
{
		return a.p<b.p;
}

int main() 
{
    ofstream fout ("milk.out");
    ifstream fin ("milk.in");
    unsigned long n;
    int m;
    fin>>n>>m;
    man ar[m];
    for(int i=0;i<m;i++)
    {
				fin>>ar[i].p>>ar[i].c;
		}
		sort(ar,ar+m);
		unsigned long tp=0;
		for(int i=0;i<m;i++)
		{	
				if(ar[i].c<n)
				{
						tp+=ar[i].c*ar[i].p;
						n-=ar[i].c;
				}
				else
				{
						tp+=n*ar[i].p;
						n=0;
						break;
				}
		}
		fout<<tp<<endl;
		return 0;
}
    
