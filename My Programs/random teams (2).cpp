#include<iostream>
using namespace std;


unsigned long long chs(unsigned long long n)
{
		return (n*(n-1))/2;
}


int main()
{	
		unsigned long long m,n;
		cin>>m>>n;
		unsigned long long min=1,max=1;
		min=((m%n)*(chs((m/n)+1)))+((n-(m%n))*(chs(m/n)));
		max= chs(m-(n-1));
		cout<<min<<' '<<max<<endl;
		return 0;
}
		
