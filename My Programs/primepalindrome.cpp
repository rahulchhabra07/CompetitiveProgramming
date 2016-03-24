#include<iostream>
#include<cmath>
using namespace std;


int chkprm(long n)
{
    int flag=1;
    if(!(n%2))
    {
              flag=0;
    }
    for(long i=3;i<=sqrt(n);i+=2)
    {
            if(!(n%i))
            {
                      flag=0;
                      break;
            }
    }
    return flag;
}


int chkpal(long n)
{
    long temp=0,cp;
    cp=n;
    while(cp)
    {
             temp*=10;
             temp+=cp%10;
             cp/=10;
    }
    return (temp==n);
}
             



int main()
{
    long n,i;
    cin>>n;
    i=n+1;
    if(n==1)
    {
            cout<<2;
            return 0;
    }
    int flag=1;
    while(flag)
    {
               if(chkpal(i))
               {
                                     if(chkprm(i))
                                      {
                                                               cout<<i;
                                                               flag=0;
                                                               return 0;
                                       
                                      }
               }
               i++;
    }
}
