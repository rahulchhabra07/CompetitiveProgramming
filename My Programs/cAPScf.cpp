#include<iostream>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
          char str[101];
          gets(str);
          int ct=0,l;
          l=strlen(str);
          for(int i=0;str[i]!='\0';i++)
          {
                  if(isupper(str[i]))
                  {
                                     ct++;
                  }
          }
          if(ct==l)
          {
                   for(int i=0;str[i]!='\0';i++)
                   {
                          putchar(tolower(str[i]));
                   }
          }
          if(ct==l-1&&islower(str[0]))
          {
                     putchar(toupper(str[0]));
                     for(int i=1;str[i]!='\0';i++)
                     {
                             putchar((tolower(str[i])));
                     }
          }
          if(ct!=l&&ct!=l-1)
          {
                            puts(str);
          }
          if(ct==l-1&&isupper(str[0]))
          {
                                     puts(str);
          }
          //system("pause");
          return 0;
}
                              
          
          
