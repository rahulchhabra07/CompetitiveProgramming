#include<iostream>
#include<stdio.h>
using namespace std;


int se(int i,char str[],char r)
{
    for(int j=i+1;str[j]!='\0';j++)
    {
            if(str[j]==r)
            {
                         return j;
            }
    }
    return 102;
}
    

int main()
{
    char s[101];
    int j=-1;
    gets(s);
    j=se(j,s,'h');
    j=se(j,s,'e');
    j=se(j,s,'l');
    j=se(j,s,'l');
    j=se(j,s,'o');
    if(j==102)
    {
              cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }
    return 0;
}
    
