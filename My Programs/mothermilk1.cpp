/*
ID: rahulch1
PROG: milk3
LANG: C++                  
*/


    
#include<bits/stdc++.h>
using namespace std;

int cord[3];

bool m[25][25][25]={0};

bool ar[25]={0};

int x,y,z;

int final[3];

void pour(int a,int b)
{
		if(cord[a]>0&&cord[b]<final[b]&&a!=b)
		{
				if(cord[b]+cord[a]>final[b])
				{
						cord[a]=cord[a]+cord[b]-final[b];
						cord[b]=final[b];
				}
				else
				{	
						cord[b]=cord[a]+cord[b];
						cord[a]=0;
				}
		}
}

void search(int a,int b,int c)
{	
		if(m[a][b][c]==1)
			return;
		m[a][b][c]=1;
		//cout<<a<<' '<<b<<' '<<c<<'\n';
		if(cord[0]==0)
			ar[c]=1;
		for(int i=0;i<3;i++)
		{
				for(int j=0;j<3;j++)
				{
						cord[0]=a;cord[1]=b;cord[2]=c;
						pour(i,j);
						search(cord[0],cord[1],cord[2]);
				}
		}
}

int main()
{
		ofstream fout ("milk3.out");
    ifstream fin ("milk3.in");
		fin>>x>>y>>z;
		final[0]=x;final[1]=y;final[2]=z;
		search(0,0,z);
		for(int i=0;i<=z;i++)
		{
				int fl=0;
				if(ar[i])
				{
						for(int j=i+1;j<=z;j++)
						{
								if(ar[j])
								{
										fl=1;
								}
						}
						fout<<i;
						if(fl)
						{
								fout<<' ';
						}
				}
				
		}
		
		fout<<'\n';
		return 0;
}
		
