#include<bits/stdc++.h>
using namespace std;
int main()
{
		char str[6]="ABCDE",test[6]="ABCDE";
		int ct=0;
		do
		{
				cout<<str<<'\n';
				next_permutation(str,str+5);
				ct++;
		}
		while(strcmp(str,test));
		cout<<ct;
		return 0;
}
