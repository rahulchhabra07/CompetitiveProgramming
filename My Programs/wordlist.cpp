#include<iostream>
#include<cstring>
#include<cstdio>
#include<cctype>
#include<algorithm>
#include<set>
using namespace std;






		
int main()
{
		int n;
		cin>>n;
		cin.ignore(5,'\n');
		//char s[81];
		for(int u=0;u<n;u++)
		{
				char s[81];
				gets(s);
				for(int i=0;s[i]!='\0';i++)
				{
						s[i]=tolower(s[i]);
				}
				int lct=0,ct=0;
				char str[81][81];
				for(int i=0;i<81;i++)
				{
						str[i][0]='\0';
				}
				char ar[81];
				int fl=1;
				for(int i=0;s[i]!='\0';i++)
				{
						if(isalpha(s[i]))
						{
								ct++;
						}
						else
						{
								label:
								int k=0;
								for(int j=i-ct;j<i;j++)
								{
										ar[k]=s[j];
										k++;
								}
								ar[k]='\0';
								strcpy(str[lct],ar);
								lct++;
								ct=0;
						}
						if(s[i+1]=='\0'&&fl)
						{
								i++;
								fl=0;
								goto label;
						}
				}
				
				//cout<<lct<<'\n';
				std::set<std::string> sortedItems;
				for(int i=0;i<lct;i++)
				{
						sortedItems.insert(str[i]);
				}
				cout<<sortedItems.size()-1;
				for(set<std::string>::iterator k=sortedItems.begin();k!=sortedItems.end();k++)
				{
						cout<<*k<<'\n';
				}
		}
		system("pause");
		return 0;
}
				
