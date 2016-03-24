#include<iostream>
#include<stdio.h>
using namespace std;

int gcd(int a, int b)
{
    if(a>b)
    {
           a=a+b;
           b=a-b;
           a=a-b;
    }
    if(!(b%a))
    {
              return a;
    }
    else
    {
        return gcd(a,b%a);
    }
}
    
    
    
int main()
{
    char str[15];
    gets(str);
    int a=0,b=0,n=0,ct=0,flag=0,temp=0,i=0;
    while(flag==0)
    {
                  
                  temp=int(str[i])-48;
                  a*=10;
                  a+=temp;
                  i++;
                  if(str[i]==' ')
                  {
                               flag=1;
                               i++;
                  }
    }
    while(flag==1)
    {
                  temp=int(str[i])-48;
                  b*=10;
                  b+=temp;
                  i++;
                  if(str[i]==' ')
                  {
                               flag=2;
                               i++;
                  }
    }
    while(flag==2)
    {
                  temp=int(str[i])-48;
                  n*=10;
                  n+=temp;
                  i++;
                  if(str[i]=='\0')
                  {
                               flag=3;
                               i++;
                  }
    }
    while(n)
    {
            if(ct%2)
            {
                    n-=gcd(n,b);
                    ct++;
                   // cout<<n;
            }
            else
            {
                n-=gcd(n,a);
                ct++;
              //  cout<<n;
            }
    }
    cout<<!(ct%2);//<<endl<<ct;
   // system("pause");
    return 0;
}
                  
                  
    
    
