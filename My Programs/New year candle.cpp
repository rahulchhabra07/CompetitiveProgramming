#include<iostream>
using namespace std;
int main()
{	
		int a, b;
		cin>>a>>b;
		int ct=a;
		while(a/b)
		{
				ct+=a/b;
				a=a/b+a%b;
		}
		cout<<ct;
		return 0;
}	
