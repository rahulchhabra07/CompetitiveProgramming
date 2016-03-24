#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char str[101];
    gets(str);
    
             for(int i=0;str[i]!='\0';i++)
             {
                     putchar(str[i]);
                     switch(str[i])
                     {
                                   case 'a': case 'e': case 'i': case 'o': case 'u':
                                        i+=2;
                     }
             }
    return 0;
}
