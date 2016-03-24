#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char s1[100],s2[100],s[100];
    gets(s1);
    gets(s2);
    gets(s);
    if(strlen(s1)+strlen(s2)!=strlen(s))
    {
                                        cout<<"NO";
                                        return 0;
    }
    int flag=1;
    for(int i=0;s1[i]!='\0';i++)
    {
            for(int j=0;s[j]!='\0';j++)
            {
                    if(s1[i]==s[j])
                    {
                                   s[j]='0';
                                   break;
                    }
                    flag=0;
            }
    }
    for(int i=0;s1[i]!='\0';i++)
    {
            for(int j=0;s[j]!='\0';j++)
            {
                    if(s1[i]==s[j])
                    {
                                   s[j]='0';
                                   break;
                    }
                    flag=0;
            }
    }
    if(flag)
    {
            cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}          
