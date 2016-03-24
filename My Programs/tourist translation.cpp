#include<iostream>
#include<cctype>
#include<cstdio>
using namespace std;
int main()
{
		int tes;
		cin>>tes;
		//cin.ignore(5,'\n');
		char tr[27];
		cin>>tr;
		cin.ignore(5,'\n');
		for(int u=0;u<tes;u++)
		{
				char str[101];
				gets(str);
				for(int i=0;str[i]!='\0';i++)
				{
						if(isalpha(str[i]))
						{
								char temp;
								temp=str[i];
								if(isupper(str[i]))
								{									
										temp=tolower(temp);
										temp=tr[temp-97];
										temp=toupper(temp);
										str[i]=temp;
								}
								else
								{
										temp=tr[temp-97];
										str[i]=temp;
								}
						}
						if(str[i]=='_')
						{
								str[i]=' ';
						}
				}
				puts(str);
		}
		return 0;
}
						
										
										
