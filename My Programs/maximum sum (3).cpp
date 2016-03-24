#include<bits/stdc++.h>
using namespace std;
int main()
{
		int n;
		cin>>n;
		int ar[n][n];
		int a;
		for(int i=0;i<n;i++)
		{
				for(int j=0;j<n;j++)
				{
						cin>>a;
						if(i>0)	a+=ar[i-1][j];
						if(j>0) a+=ar[i][j-1];
						if(i>0&&j>0) a-=ar[i-1][j-1];
						ar[i][j]=a;
						
				}
				//cout<<endl;
				
		}
		int max=INT_MIN;
		for(int i=0;i<n;i++) for(int j=0;j<n;j++)
		for(int k=i;k<n;k++) for(int l=j;l<n;l++)
		{
				a=ar[k][l];
				if(i>0)	a-=ar[i-1][j];
				if(j>0) a-=ar[i][j-1];
				if(i>0&&j>0) a+=ar[i-1][j-1];
				if(max<a) max=a;
				cout<<a<<' ';
		}
		//cout<<max<<'\n';
		return 0;
}
				
