#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int tes,ct;
    char str[201];
    cin>>tes;
    cin.ignore(5,'\n');
    for(int a=0;a<tes;a++)
    {
            ct=0;
            gets(str);
            for(int i=0;str[i]!='\0';i++)
            {
                    if(str[i]!='*')
                    {
                              for(int j=i+1;str[j]!='\0';j++)
                              {
                                      if(str[i]==str[j])
                                      {
                                                        str[j]='*';
                                                        break;
                                      }
                              }
                              ct++;
                    }
            }
            cout<<ct<<endl;
    }
    return 0;
}
                    
                                                        
                    
            
