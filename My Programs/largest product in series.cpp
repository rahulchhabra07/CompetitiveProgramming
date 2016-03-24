#include<bits/stdc++.h>
using namespace std;
int main()
{
		int a;
		cin>>a;
		int ar[a];
		long prod=1;
		long long maxprod=0;
		for(int i=0;i<a;i++)
		{
				char p;
				p=getchar();
				p-=48;
				ar[i]=p;
				if(i>11)
				{
						prod=ar[i]*ar[i-1]*ar[i-2]*ar[i-3]*ar[i-4]*ar[i-5]*ar[i-6]*ar[i-7]*ar[i-8]*ar[i-9]*ar[i-10]*ar[i-11]*ar[i-12];
						if(prod>maxprod)
						{
								maxprod=prod;
								cout<<i<<endl;
						}
						
				}
		}
		cout<<endl<<maxprod;
		return 0;
}

		
