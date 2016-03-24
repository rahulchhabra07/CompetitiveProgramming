#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
		char a[101],b[101];
		gets(a);
		gets(b);
		strrev(a);
		if(strcmp(a,b))
		{
				cout<<"NO";
		}
		else
		{
				cout<<"YES";
		}
		return 0;
}
