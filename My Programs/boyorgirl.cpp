#include<iostream>
#include<cstdio>
#include<cstring>
#include<set>
using namespace std;
int main()
{
		char a[101];
		gets(a);
		set<char> s;
		for(int i=0;i<strlen(a);i++)
		{
				s.insert(a[i]);
		}
		int n=s.size();
		if(n%2)
		{
				cout<<"IGNORE HIM!";
		}
		else
		{
				cout<<"CHAT WITH HER!";
		}
		return 0;
}
		
