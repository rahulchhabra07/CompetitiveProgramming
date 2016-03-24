#include<iostream>
using namespace std;
int s(long long n)
{
		int t=0;
		while(n)
		{
				t+=(n%10);
				n/=10;
		}
		return t;
}
				

int main()
{
		for(int i=109;i<999;i++)
		{
				if(s(i)==10)
				{
						cout<<i<<' '<<i-109<<endl;
				}
		}
		system("pause");
		return 0;
}
								
				
		
