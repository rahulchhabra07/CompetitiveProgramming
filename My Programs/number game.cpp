#include<iostream>
using namespace std;

int main()
{
	
	long long n,a;
	cin>>n;
	for(long long i=1;i<=n;i++)
	{
		cin>>a;
		if(a%4==1)
		{
			cout<<"ALICE\n";
		}
		else
		{
			cout<<"BOB\n";
		}
	}
	
}
