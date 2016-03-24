#include<iostream>
using namespace std;

int main()
{
		int n,m;
		cin>>n>>m;
		int a[n],b[m];
		for(int i=0;i<n;i++)
		{
				cin>>a[i];
		}
		for(int i=0;i<m;i++)
		{
				cin>>b[i];
		}
		int mat[n][m];
		if(a[0]==b[0])
		{
				mat[0][0]==1;
		}
		else
		{
				mat[0][0]=0;
		}
		for(int i=0;i<n;i++)
		{
				for(int j=0;j<m;j++)
				{
						if(a[i]==a[j])
						{
								mat[i][j]=mat[i-1][j-1]+1;
						}
						else
						{
								mat[i][j]=max(mat[i-1][j],mat[i][j-1]);
						}
				}
		}
		cout<<mat[n-1][m-1];
		return 0;
}
						
		
		
		
		
		
		
		
		
		
