#include<iostream>
using namespace std;


int max(int a,int b)
{
		if(a>b)
		{	
				return a;
		}
		else
		{
				return b;
		}
}
			


int main()
{
		long n;
		cin>>n;
		if(n>=0)
		{
				cout<<n;
				return 0;
		}
		else
		{
				cout<<max(n/10,((n/100)*10)+n%10);
				return 0;
		}
}
