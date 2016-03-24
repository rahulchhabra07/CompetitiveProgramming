#include<bits/stdc++.h>
using namespace std;
long long M=1000000007;
int main()
{
		long long n;
		cin>>n;
		long long tc=1;
		while(n>1)
		{
				tc<<=1;
				tc%=M;
				n--;
		}
		tc=((tc-1)*3)%M;
		cout<<tc;
}
				
		
