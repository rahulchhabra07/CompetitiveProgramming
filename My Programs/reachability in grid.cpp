#include<iostream>
#include<cmath>
using namespace std;


int n=4;
int a[4][4];
int mark[4][4];



int l(int a,int b)
{
		if(a>=0&&a<n&&b>=0&&b<n)
		return 1;
		else
		return 0;
}




void check(int i,int j)
{
		if(l(i-1,j))
		{
				if((abs(a[i-1][j]-a[i][j])<=10)&&
					 (mark[i-1][j]==0))
				{
						mark[i-1][j]=1;
						check(i-1,j);
				}
		}
		if(l(i+1,j))
		{
				if((abs(a[i+1][j]-a[i][j])<=10)&&
					 (mark[i+1][j]==0))
				{
						mark[i+1][j]=1;
						check(i+1,j);
				}
		}
		if(l(i,j-1))
		{
				if((abs(a[i][j-1]-a[i][j])<=10)&&
					 (mark[i][j-1]==0))
				{
						mark[i][j-1]=1;
						check(i,j-1);
				}
		}	
		if(l(i,j+1))
		{
				if((abs(a[i][j+1]-a[i][j])<=10)&&
					 (mark[i][j+1]==0))
				{
						mark[i][j+1]=1;
						check(i,j+1);
				}
		}	
}	
		
		
		
		

int main()
{
		//int a[n][n];
		for(int i=0;i<n;i++)
		{
				for(int j=0;j<n;j++)
				{
						cin>>a[i][j];
				}
		}
		//int mark[n][n];
		for(int i=0;i<n;i++)
		{
				for(int j=0;j<n;j++)
				{
						mark[i][j]=0;
				}
		}
		mark[0][0]=1;
		check(0,0);
		for(int i=0;i<n;i++)
		{
				for(int j=0;j<n;j++)
				{
						cout<<mark[i][j]<<' ';
				}
				cout<<endl;
		}
		system("pause");
		return 0;
}
		
