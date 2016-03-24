#include<iostream>
using namespace std;


long long min(long long a, long long b)
{
		if(a<b)
		return a;
		else
		return b;
}



int main()
{
		long long a,b,c;
		cin>>a>>b>>c;
		cout<<min(a,min(b,c));
		return 0;
}
