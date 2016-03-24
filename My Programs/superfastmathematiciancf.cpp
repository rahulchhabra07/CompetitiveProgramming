#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char s1[101],s2[101];
    int a,b;
    gets(s1);
    gets(s2);
    for(int i=0;s1[i]!='\0';i++)
    {
            a=int(s1[i])-48;
            b=int(s2[i])-48;
            cout<<(a^b);
    }
    //system("pause");
    return 0;
}
            
            
            
