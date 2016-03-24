/*
ID: rahulch1
PROG: numtri
LANG: C++                  
*/    
#include<bits/stdc++.h>
using namespace std;

int main()
{
		ofstream fout ("numtri.out");
    ifstream fin ("numtri.in");
		int n;
		fin>>n;
		int ar[n][n];
		
		for(int i=0;i<n;i++)
		{
				for(int j=0;j<n;j++)
				{
						ar[i][j]=0;
				}
		}
		
		for(int i=0;i<n;i++)
		{
				for(int j=0;j<=i;j++)
				{
						int a;
						fin>>a;
						ar[i][j]=a;
				}
		}
		
		for(int i=n-2;i>=0;i--)
		{
				for(int j=0;j<=n-2;j++)
				{
						ar[i][j]+=max(ar[i+1][j],ar[i+1][j+1]);
				}
		}
		
		for(int i=0;i<n;i++)
		{
				for(int j=0;j<n;j++)
				{
						//cout<<ar[i][j]<<' ';
				}
				//cout<<endl;
		}
		
		fout<<ar[0][0]<<'\n';
		return 0;
}
		
