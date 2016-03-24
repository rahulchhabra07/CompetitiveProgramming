#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
          int tes;
          cin>>tes;
          cin.ignore(5,'\n');
          for(int u=1;u<=tes;u++)
          {
                  char ar[10001];
                  gets(ar);
                  int l;
                  l=strlen(ar);
                  if(l%2)
                  {
                         cout<<-1<<endl;
                  }
                  
                  else
                  {
                         l/=2;
                         int ct=0;
                         for(int i=0;i<l;i++)
                         {
                                 int fl=1;
                                 for(int j=l;ar[j]!='\0';j++)
                                 {
                                         
                                         if(ar[i]==ar[j]&&fl)
                                         {
                                                         ar[j]='*';
                                                         fl=0;
                                         }
                                 }
                                 if(fl)
                                 {
                                       ct++;
                                 }
                         }
                         cout<<ct;
                  }
          }
          return 0;
}       
