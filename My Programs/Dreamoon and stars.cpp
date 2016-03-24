#include<iostream>
using namespace std;
int main()
{
		int n,m;
		cin>>n>>m;
		int min=n/2+n%2;
		while(min<=n)
		{
				if(!(min%m))
				{
						cout<<min;
						return 0;
				}
				min++;
		}
		cout<<-1;
		return 0;
}
