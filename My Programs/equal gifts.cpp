#include<iostream>
using namespace std;
int main()
{
		//int tes;
		//cin>>tes;
		//for(int u=0;u<tes;u++)
		//{
				int n;
				long m=0;
				cin>>n;
				int ar[2*n];
				for(int i=0;i<2*n;i++)
				{
						cin>>ar[i];
						m+=ar[i];
				}
				bool b[m+1];
				for(int i=0;i<=m;i++)
				{
						b[i]=0;
				}
				b[0]=1;
				for(int i=0;i<2*n;i++)
				{
						for(int j=m;j>=ar[i];j--)
						{
								b[j]|=b[j-ar[i]];
						}
				}
				long double k;
				k=float(m)/2.0;
				long j;
				j=k;
				for(j;j>0;j--)
				{
						if(b[j])
						{
								cout<<2*(k-j);
								return 0;
						}
				}
				
				
				
		return 0;
}
		
