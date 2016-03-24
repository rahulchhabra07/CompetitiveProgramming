#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
		int tes;
		cin>>tes;
		for(int u=0;u<tes;u++)
		{
				long double p,s,a;
				cin>>p>>s;
				p/=4;
				s/=2;
				a=((2*p)-sqrt((4*p*p)-(12*s)))/6;
				cout<<setprecision(2)<<fixed<<(a*a*a)-(a*a*p)+(a*s)<<'\n';
			//	cout << setprecision(3) << fixed <<  num << '\n';
		}
		return 0;
}
			
