#include<iostream>
using namespace std;
void d(long k,long l,long n,long ar[],long t)
{
		if(n<0)
		{
				return;
		}
		t++;
		ar[n]=t;
		d(k,l,n-k,ar,t);
		d(k,l,n-1,ar,t);
		d(k,l,n-l,ar,t);
}
int main()
{
		long k,l,tes;
		cin>>k>>l>>tes;
		for(long u=0;u<tes;u++)
		{	
				long n;
				cin>>n;
				long ar[n+1];
				for(long i=0;i<n+1;i++)
				{
						ar[i]=0;
				}
				d(k,l,n,ar,0);
				cout<<ar[0]<<endl;
		}
		system("pause");
		return 0;
}
				
