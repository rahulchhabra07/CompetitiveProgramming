#include<iostream>
#include<stdio.h>
using namespace std;


int chk(char str[],char sub[])
{
    for(int i=0;str[i]!='\0';i++)
    {
            for(int j=0;sub[j]!='\0',str[i+j]==sub[j];j++)
            {
                    if(sub[j+1]=='\0')
                    {
                                      return 1;
                    }
            }
    }
    return 0;
}
    



int main()
{
    char str[101];
    gets(str);
    char s1[]="1111111", s2[]="0000000";
    if(chk(str,s1)||chk(str,s2))
    {
                                cout<<"YES";
    }
    else
    {
        cout<<"NO";
    
    }
    return 0;
}
    
