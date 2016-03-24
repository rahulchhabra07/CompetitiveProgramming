#include<iostream>
#include<cstdio>
#include<algorithm>
#include<set>
#include<cstring>
using namespace std;
int main()
{	
		int tes;
		cin>>tes;
		cin.ignore(5,'\n');
		char j[101],s[101];
		for(int u=0;u<tes;u++)
		{
				set<char> jset;
				gets(j);
				gets(s);
				int lenj=strlen(j);
				int lens=strlen(s);
				int ct=0;
				for(int i=0;i<lenj;i++)
				{	
						jset.insert(j[i]);
				}
				for(set<char>::iterator k=jset.begin();k!=jset.end();k++)
				{
						ct+=count(s,s+lens,*k);
				}
				cout<<ct<<'\n';
		}
		return 0;
}
