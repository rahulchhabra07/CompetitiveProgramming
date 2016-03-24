#include<iostream>
#include<cstring>
using namespace std;
int main()
{
		char str[5001];
		cin>>str;
		int l=strlen(str);
		long long ct=0;
		int p=0;
		for(int i=0;i<l-4;i++)
		{	
				if(str[i+0]=='b'&&str[i+1]=='e'&&str[i+2]=='a'&&str[i+3]=='r')
				{
						ct+=(i+1-p)*(l-(i+3));
						p=i+1;
				}
		}
		cout<<ct;
		return 0;
}
