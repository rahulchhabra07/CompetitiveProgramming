#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;



void swap(int &a, int&b)
{
		a=a+b-(b=a);
}


char s[1001];
int main()
{
		int tes;
		cin>>tes;
		cin.ignore(5,'\n');
		for(int u=0;u<tes;u++)
		{	
				gets(s);
				int len;
				len=strlen(s);
				char sa[len+1],sb[len+1];
				strcpy(sa,s);
				sa[len/2]='\0';
				for(int i=0;i<len/2;i++)
				{
						swap(s[i],s[len-i-1]);
				}
				strcpy(sb,s);
				sb[len/2]='\0';
				len/=2;
				sort(sa,sa+len);
				sort(sb,sb+len);
				if(!strcmp(sa,sb))
				{
						cout<<"YES\n";
				}
				else
				{
						cout<<"NO\n";
				}
		}
		return 0;
}
				
				
