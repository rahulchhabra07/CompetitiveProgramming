#include<iostream>
#include<cmath>
using namespace std;
int main()
{
		int ct=0,n,b;
		for(int i=0;i<5;i++)
		{
				cin>>n;
				ct+=n;
		}
		if(ct%5)
		{
				cout<<-1;
				return 0;
		}
		else
		{
				b=ct/5;
				if(b>0)
				cout<<b;
				else
				cout<<-1;
		}
		return 0;
}
	
		
