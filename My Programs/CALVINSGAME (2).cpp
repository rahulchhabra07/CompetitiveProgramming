#include<iostream>
#include<climits>
using namespace std;
typedef long l;
int main()
{	
		l n,k;
		cin>>n>>k;
		l ar[n];
		k--;
		for(l i=0;i<n;i++)
		{
				cin>>ar[i];
		}
		l fsum[n];
		fsum[k]=0;
		fsum[k+1]=ar[k+1];		
		for(l i=k+2;i<n;i++)
		{
				fsum[i]=max(fsum[i-1],fsum[i-2])+ar[i];
		}		
		l bmax=0;
		for(l i=k+1;i<n;i++)
		{
				l bsum[n];
				bsum[i]=fsum[i];
				bsum[i-1]=fsum[i]+ar[i-1];
				for(l j=i-2;j>=0;j--)
				{	
						bsum[j]=max(bsum[j+1],bsum[j+2])+ar[j];
				}
				/*for(l i=0;i<n;i++)
				{
						cout<<bsum[i]<<' ';
				}*/
				//cout<<endl;
				if(bsum[0]>bmax)
				{
						bmax=bsum[0];
				}
		}
		cout<<bmax;
		return 0;
}
				
				
				
				
				
				
				
				
				
				
		
		
				
				
		
