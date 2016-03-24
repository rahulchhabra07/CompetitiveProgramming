#include<iostream>
#include<cstring>
#include<cctype>
#include<cstdio>
using namespace std;
void swap(int &a,int&b)
{
		int t;
		t=a;
		a=b;
		b=t;
}
void l(long n)
{
		char s[10];
		int i=0;
		while(n)
		{
				s[i]=n%26+64;
				i++;
				n/=26;
		}
		//int l=strlen(s);
		
		for( i=i-1;i>=0;i--)
		{
				cout<<s[i];
		}
}
		
int main()
{
		long tes;
		cin>>tes;
		cin.ignore(5,'\n');
		for(int u=0;u<tes;u++)
		{	
				char str[25];
				gets(str);
				char s1[10];
				int i,j=0;
				for(i=0;str[i]!='\0';i++)
				{
						if(isalpha(str[i]))
						{
								s1[j]=str[i];
								s1[j+1]='\0';
								j++;
						}
						else
						break;
				}
				int fl=0;
				int k;
				for(k=i;str[i]!='\0';i++)
				{
						if(isalpha(str[i]))
						{
								fl=1;
								break;
						}
				}
				if(fl)
				{
						long a=0,b=0;
						for(i=k;str[i]!='\0';i++)
						{
								if(isalpha(str[i]))
								break;
								else
								{
										a*=10;
										a+=str[i]-48;
								}
						}
						for(i=i+1;str[i]!='\0';i++)
						{	
								b*=10;
								b+=str[i]-48;
						}
						l(b);
						cout<<a<<'\n';
				}
				else
				{
						long a=0,b=0;
						for(int m=0;s1[m]!='\0';m++)
						{
								a*=26;
								a+=s1[m]-64;
						}
						for(i=k;str[i]!='\0';i++)
						{
								{
										b*=10;
										b+=str[i]-48;
								}
						}
						cout<<'R'<<b<<'C'<<a<<'\n';
				}
		}
		return 0;
}
												
