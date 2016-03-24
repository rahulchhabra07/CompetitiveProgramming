#include<iostream>
#include<stdio.h>
using namespace std;


long mv(long n)
{
             if((n/2+n/3+n/4)<n)
             {
                              return (n);
             }
             else
             {
                              return mv(n/2)+mv(n/3)+mv(n/4);
             }
}


int main()
{
    long a;
          while(!cin.eof())
          {
                      //long a;
                      cin>>a;
                      cout<<mv(a)<<endl;
          }
          return 0;
}


             
