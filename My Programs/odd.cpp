#include<iostream>
#include<cmath>
using namespace std;
int main()
{
		iostream::sync_with_stdio(false);
		int tes;
		cin>>tes;
		for(int u=0;u<tes;u++)
		{
				long n;
				cin>>n;
				long a=log2(n);
				cout<<long(pow(2.0, double(a)))<<'\n';
				
		}
		return 0;
}
