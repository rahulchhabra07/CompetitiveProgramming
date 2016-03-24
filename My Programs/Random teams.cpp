#include<iostream>
#include<cmath>
using namespace std;
int main()
{
		long n,t;
		cin>>n>>t;
		long long max,min;
		max=n-(t-1);
		max=max*(max-1)/2;
		if(n%t)
		{
				min=ceil(double(n)/double(t));
				//cout<<'a'<<min<<"a\n";
				min=((t-1)*min*(min-1))/2+((n%min)*((n%min)-1))/2;
		}
		else
		{
				min=n/t;
				min=t*min*(min-1)/2;
		}
		cout<<min<<' '<<max;
		//system("pause");
		return 0;
}
		
