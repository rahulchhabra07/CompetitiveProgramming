#include<iostream>
#include<map>
using namespace std;

map<long,long long> ar;

ar[1]=1;
long N=0;
int main()
{
		while(cin.eof()==0)
		{
				long a;
				cin>>a;
				if(i<=N)
				{
						cout<<ar[i];
				}
				else
				{
						for(long i=N;i<a;i++)
						{
								ar[i]=max(i, (i/2+i/3+i/6));
								N++;
			  		}
			  }
			  cout<<ar[i];
			  cout<<'\n';
		}
		return 0;
}
				
						
						
		
