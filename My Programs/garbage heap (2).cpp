#include<bits/stdc++.h>
using namespace std;
int main()
{
		int tes;
		cin>>tes;
		while(tes--)
		{	
				int p,b,c;
				cin>>p>>b>>c;
				int ar[p][b][c];
				int a;
				for(int i=0;i<p;i++)
				{
						for(int j=0;j<b;j++)
						{
								for(int k=0;k<c;k++)
								{
										
										cin>>a;
										if(i>0)		a+=ar[i-1][j][k];
										if(j>0)		a+=ar[i][j-1][k];
										if(k>0)   a+=ar[i][j][k-1];
										if(i>0&&j>0)	a-=ar[i-1][j-1][k];
										if(i>0&&k>0)	a-=ar[i-1][j][k-1];
										if(j>0&&k>0)	a-=ar[i][j-1][k-1];
										if(i>0&&j>0&&k>0) a+=ar[i-1][j-1][k-1];
										ar[i][j][k]=a;
								}
						}
				}
				long long max=LONG_LONG_MIN;
				for(int i=0;i<p;i++) for(int j=0;j<b;j++) for(int k=0;k<c;k++)
				for(int x=i;x<p;x++) for(int y=j;y<b;y++) for(int z=k;z<c;z++)
				{
						a=ar[x][y][z];
						if(i>0)		a-=ar[i-1][j][k];
						if(j>0)		a-=ar[i][j-1][k];
						if(k>0)   a-=ar[i][j][k-1];
						if(i>0&&j>0)	a+=ar[i-1][j-1][k];
						if(i>0&&k>0)	a+=ar[i-1][j][k-1];
						if(j>0&&k>0)	a+=ar[i][j-1][k-1];
						if(i>0&&j>0&&k>0) a-=ar[i-1][j-1][k-1];
						if(a>max) max=a;
				}
				cout<<max<<'\n';
		}
		return 0;
}
									
