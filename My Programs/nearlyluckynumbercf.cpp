#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    char num[20];
    gets(num);
    int a=0,t;
    for(int i=0; num[i]!='\0';i++)
    {
            if(num[i]=='4'||num[i]=='7')
            {
                                        a++;
            }
    }
    if(a==4||a==7)
    {
                  cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
    
    
