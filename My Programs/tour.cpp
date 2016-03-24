#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;
int main()
{
    long long n,s=0;
    int a;
    scanf("%lld",&n);
    for(long long i=0;i<n;i++)
    {
          scanf("%d",&a);
          s+=(a*(n-1-(pow(2.0,float(i)))));
    }
    printf(s);
    return 0;
}    
    
