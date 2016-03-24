#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int N=10000009;
int main()
{
		int tes;
		cin>>tes;
		cin.ignore(5,'\n');
		for(int u=0;u<tes;u++)
		{
				char str[1000001];
				gets(str);
				long long l;
				l=strlen(str);
				long long tc=1;
				//int fl=1;
				for(int i=0;i<l/2;i++)
				{
						char a=str[i],b=str[l-i-1];
						if((a!='?')&&(b!='?')&&(a!=b))
						{
								tc=0;
								break;
						}
						if((a=='?')&&(b=='?'))
						{
								tc*=26;
								tc%=N;
						}
				}
				if(l%2)
				{
						if(str[l/2]=='?')
						{
								tc*=26;
								tc%=N;
						}
				};
				cout<<tc<<'\n';
		}
		return 0;
}
						
								
						
						
						
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
