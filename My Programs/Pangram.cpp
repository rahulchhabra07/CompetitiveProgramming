#include<iostream>
#include<cstdio>
#include<cctype>
using namespace std;
int main()
{
		char ar[26]={0};
		char str[101];
		int ch;
		cin>>ch;
		cin.ignore(5,'\n');
		gets(str);
		for(int i=0;str[i]!='\0'; i++)
		{
				ar[toupper(str[i])-65]=1;
		}
		for(int i=0;i<26;i++)
		{	
				if(!ar[i])
				{
						cout<<"NO";
						return 0;
				}
		}
		cout<<"YES";
		return 0;
}
		
		
