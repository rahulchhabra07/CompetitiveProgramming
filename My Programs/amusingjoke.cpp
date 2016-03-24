#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
using namespace std;
int main()
{
		char a[201],b[101],d[201];
		gets(a);
		gets(b);
		gets(d);
		strcat(a,b);
		sort(a,a+strlen(a));
		sort(d,d+strlen(d));
		if(strcmp(a,d))
		{
				cout<<"NO";
		}
		else
		{
				cout<<"YES";
		}
		return 0;
}
