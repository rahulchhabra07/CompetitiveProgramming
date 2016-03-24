#include<iostream>
using namespace std;
int main()
{
		long long n,k;
		cin>>n>>k;
		if(k%2)
		{
				cout<<k/2+1;
		}
		else
		{
				cout<<(n/2)+(n%2)+(k/2);
		}
		return 0;
}
		
