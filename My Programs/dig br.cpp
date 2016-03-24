#include<iostream>
#include<cmath>
using namespace std;

int dig(long n)
{
    int ct=0;
    while(n)
    {
            ct+=n%10;
            n/=10;
    }
    return ct;
}

int main()
{
    long ct=0;
    for(int i=1;i<=17;i++)
    {
            for(int j=1;j<=29;j++)
            {
                    ct+=dig(i*i*i+j*j*j);
                    
            }
    }
    cout<<ct;
    system("pause");
    return 0;
}
