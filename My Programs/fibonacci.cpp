#include<iostream>
#include<vector>
using namespace std;

typedef unsigned long long 		ull;
typedef vector<int> 					vi;
#define M 100000007


int main()
{
		while(!cin.eof()){
		ull n;
		cin>>n;
		vi v;
		for(ull i=0;i<=n;i++)
		{
				if(i<2)
				{
						v.push_back(i);
				}
				else
				{
						v.push_back((v[i-1]+v[i-2])%M);
				}
		}
		cout<<v[n]<<'\n';}
		return 0;
}

				
		
