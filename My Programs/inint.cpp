#include<bits/stdc++.h>
using namespace std;


int cache[100];


int first_dig(int k)
{
		while(k)
		{
				if(k-k%10==0)
					return k;
				k/=10;
		}
}

int min_mov(int k)
{
		cout<<k<<' ';
		if(k>100)
			return 1000;			
		if(k==100)
			return 0;
		if(cache[k]!=-1)
			return cache[k];
		else
		{
				if(k%10)
					return cache[k]=1+min(min_mov(k+k%10),min_mov(k+first_dig(k)));
				else
					return cache[k]=1+(min_mov(k+first_dig(k)));
		}
}
			
		


int main()
{
		for(int i=0;i<100;i++)
		{
				cache[i]=-1;
		}
		int k;
		while(cin>>k)
		{
				cout<<min_mov(k)<<'\n';
		}
		return 0;
}

