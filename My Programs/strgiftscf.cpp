#include<iostream>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
using namespace std;
int main()
{
    char s1[101],s2[101];
    gets(s1);
    gets(s2);
    for(int i=0;s1[i]!='\0';i++)
    {
            s1[i]=tolower(s1[i]);
    }
    for(int i=0;s2[i]!='\0';i++)
    {
            s2[i]=tolower(s2[i]);
    }
    //puts(s1);
    //puts(s2);
    cout<<strcmp(s1,s2);
    //system("pause");
    
    return 0;
}
    
