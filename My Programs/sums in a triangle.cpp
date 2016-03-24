#include<iostream>
using namespace std;


int max(int a,int b)
{
		if(a>b)
		return a;
		else
		return b;
}

int main()
{
		int tes;
		cin>>tes;
		for(int u=0;u<tes;u++)
		{
				int n;
				cin>>n;
				int ar[n][n];
				for(int i=0;i<n;i++)
				{
						for(int j=0;j<=i;j++)
						{
								cin>>ar[i][j];
						}
				}
				/*for(int i=0;i<n;i++)
				{
						for(int j=0;j<=i;j++)
						{
								cout<<ar[i][j]<<'\t';
						}
						cout<<endl;
				}*/
				for(int i=n-2;i>=0;i--)
				{
						for(int j=0;j<=i;j++)
						{
								ar[i][j]+=max(ar[i+1][j],ar[i+1][j+1]);
								
						}
						
				}
				cout<<ar[0][0]<<endl;
		}
		return 0;
}
					
							
							
