/*
ID: rahulch1
PROG: wormhole
LANG: C++                  
*/

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;




struct cd
{
		long x,y;
};
bool op(cd a,cd b)
{	
		if(a.y==b.y)
		{
				return a.x<b.x;
		}
		else
		return a.y<b.y;
}

int main() 
{
    ofstream fout ("wormhole.out");
    ifstream fin ("wormhole.in");
    int n;
    fin>>n;
    cd ar[n];
    for(int i=0;i<n;i++)
    {
				fin>>ar[i].x>>ar[i].y;
		}
		sort(ar,ar+n,op);
		for(int i=0;i<n;i++)
		{
				fout<<ar[i].x<<' '<<ar[i].y<<endl;
		}
		long long ct=0,tc=0;
		for(int i=0;i<n-1;i++)
		{
				if(ar[i].y==ar[i+1].y)
				{
						tc++;
				}
				else
				{
						ct+=tc*(tc+1)/2;
						tc=0;
				}
		}
		fout<<ct<<'\n';
		return 0;
}
   	
