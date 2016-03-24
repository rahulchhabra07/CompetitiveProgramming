#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
		int n;
		cin>>n;
		cin.ignore(5,'\n');
		char str[(2*n)+1];
		gets(str);
		sort(str,str+n);
		sort(str+n,str+(2*n));
		int c1=0,c2=0;
		for(int i=0;i<n;i++)
		{
				if(str[i]<str[n+i])
				{
						c1++;
				}
				if(str[i]>str[n+i])
				{
						c2++;
				}
		}
		if((c1==n)||(c2==n))
		{
				cout<<"YES";
		}
		else
		{
				cout<<"NO";
		}
		return 0;
}
