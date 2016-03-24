#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    char str[51];
    int ct=1,n;
    cin>>n; 
    cin.ignore(5,'\n');   
    gets(str);
    for(int i=1;i<strlen(str);i++)
    {
             if(str[i]!=str[i-1])
             {
                                 ct++;
             }
    }
    cout<<n-ct;
    //system("pause");
    return 0;
}
              
