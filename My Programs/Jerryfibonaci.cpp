#include<iostream>
using namespace std;
int main()
{
		int tes;
		cin>>tes;
		for(int u=0;u<tes;u++)
		{
				long n;
				cin>>n;
				long a=0,b=1,t;
				while(n>b)
				{
						t=a+b;
						a=b;
						b=t;
				}
				if(n==b)
				{
						cout<<"is fibo\n";
				}
				else
				{
						cout<<"not fibo\n";
				}
		}
		return 0;
}
