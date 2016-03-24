#include<iostream>
//#include<conio.h>
using namespace std;
int main()
{
	//clrscr();
	long n,s1=0,s2=0,a;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		if(i%2)
		{
			s1+=a;
		}
		else
		{
			s2+=a;
		}
	}
	if(s1<s2)
	{
		cout<<s1;
	}
	else
	{
		cout<<s2;
	}
	//getch();
	return 0;
}
