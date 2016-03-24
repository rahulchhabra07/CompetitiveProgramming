#include<iostream>
using namespace std;
int main()
{
		int n=4,m=2;
		while(n!=2)
		{
				n*=2;
				n%=100;
				m++;
		}
		cout<<m;
		system("pause");
		return 0;
}
				
		
