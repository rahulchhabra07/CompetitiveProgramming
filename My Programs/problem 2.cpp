#include<iostream>
#include<cstring>
using namespace std;
void swap(int &a,int&b)
{	
		int t;
		t=a;
		a=b;
		b=t;
}
int ispal(long n)
{
		char ar[15],br[15];
		int i=0;
		while(n)
		{
				ar[i]=(n%10)+48;
				br[i]=(n%10)+48;
				n/=10;
				i++;
		}
		ar[i]='\0';
		br[i]='\0';
		int l=0;
		for(l=0;ar[l]!='\0';l++)
		{}
		//cout<<l<<endl;
		for(int i=0;i<l/2;i++)
		{	
				swap(ar[i],ar[l-i-1]);
		}
		//cout<<ar<<br;
		return(!strcmp(ar,br));
}
				
int main()
{
		int tes;
		cin>>tes;
		long k;
		for(int u=0;u<tes;u++)
		{
				cin>>k;
				for(long i=k+1;1;i++)
				{
						if(ispal(i))
						{
								cout<<i<<'\n';
								break;
						}
				}
		}
		//cout<<ispal(1);
		return 0;
}
										
