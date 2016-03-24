#include<iostream>
#include<limits>
using namespace std;


int min(int a,int b)
{
		if(a<b)
		{
				return a;
		}
		return b;
}



int main()
{
		int n,v;
		cin>>v>>n;
		int ar[v][v];
		for(int i=0;i<v;i++)
		{
				for(int j=0;j<v;j++)
				{
						ar[i][j]=0;
				}
		}
		for(int i=0;i<n;i++)
		{
				int x,y,t;
				cin>>x>>y>>t;
				x--;
				y--;
				ar[x][y]=ar[y][x]=t;
		}
		int exp[v],brn[v];
		for(int i=0;i<v;i++)
		{
				exp[i] = std::numeric_limits<int>::max();
				brn[i]=0;
		}
		exp[0]=0;
		for(int i=0;i<v;i++)
		{
				if(!brn[i])
				{
						brn[i]=1;
						for(int j=0;j<v;j++)
						{
								if(ar[i][j])
								{
										exp[j]=min(ar[i][j]+exp[i],exp[j]);
								}
						}
				}
		}				
		for(int i=0;i<v;i++)
		{
				cout<<exp[i]<<' ';
		}
		system("pause");
		return 0;
}		
		
		
		
