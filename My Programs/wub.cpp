#include<iostream>
#include<stdio.h>



int isw(char str[],int i)
{
    return (str[i]=='w'&&str[i+1]=='u'&&str[i+2]=='b');
}
    


int main()
{
    char str[201],s[201];
    gets(str);
    int j=0;
    for(int i=0;str[i]!='\0';i++)
    {
            if(isw(str,i)&&isw(str,i+3))
            {
                          i+=2;
            }
            else
            {
                if(isw(str,i)&&!isw(str,i+3)&&j)
                {
                      i+=2;
                      s[j]=' ';
                      j++;
                }
                else
                {
                    if(isw(str,i)&&!isw(str,i+3))
                    {
                                                    i+=2;
                    }
                    else
                    {
                        if(!isw(str,i))
                        {
                               s[j]=str[i];
                               j++;
                        }
                    }
                }
            }
    }
    s[j]='\0';
    puts(s);
    //system("pause");
    return 0;
}
            
    
