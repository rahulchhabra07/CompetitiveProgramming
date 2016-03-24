#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char str[101];
    gets(str);
    int flag=0;
    for(int i=0;str[i]!='\0';i++)
    {
     switch(str[i])
     {
                   case 'H': case 'Q': case '9':
                        flag=1;
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
