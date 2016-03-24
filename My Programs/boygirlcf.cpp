#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int ct=0;
    char str[101];
    gets(str);
    for(int i=0;str[i]!='\0';i++)
    {
            if(str[i]!=' ')
            {
                         for(int j=i;str[j]!='\0';j++)
                         {
                                 if(str[i]==str[j])
                                 {
                                                   str[j]=' ';
                                 }
                         }
                         ct++;
            }
    }
    if(ct%2)
    {
            cout<<"IGNORE HIM!";
    }
    else
    {
        cout<<"CHAT WITH HER!";
    }
            
    return 0;
}
            
