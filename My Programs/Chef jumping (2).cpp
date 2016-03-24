#include<iostream>
using namespace std;
int main()
{
		unsigned long long a;
		cin>>a;
		int b;
		b=a%6;
		if(b==0||b==1||b==3)
		{
				cout<<"yes";
		}
		else
		{
				cout<<"no";
		}
		return 0;
}
