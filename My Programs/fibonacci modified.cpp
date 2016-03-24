#include<bits/stdc++.h>
using namespace std;

int a,b;

long fib( int n)
{
		int temp;
		temp=a+(b*b);
		a=b;
		b=temp;
		return b;
}
		
		
int main()
{
		cin>>a>>b;
		int n;
		if(n==1)
			cout<<a;
		else
			cout<<fib(n-1);
		return 0;
}
		
