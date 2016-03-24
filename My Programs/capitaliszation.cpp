#include<iostream>
#include<stdio.h>
#include<ctype.h>
int main()
{
    char c;
    c=getchar();
    putchar(toupper(c));
    char str[1000];
    gets(str);
    puts(str);
    return 0;
}
    
