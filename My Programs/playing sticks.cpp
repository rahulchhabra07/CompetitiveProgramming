#include<iostream>
using namespace std;


int min(int a, int b)
{
		if(a<b)
		{
				return a;
		}
		else
		{
				return b;
		}
}


int main()
{
		int a,b,c;
		cin>>a>>b;
		c=min(a,b);
		if(c%2)
		{
				cout<<"Akshat";
		}
		else
		{
				cout<<"Malvika";
		}
		return 0;
}
				
