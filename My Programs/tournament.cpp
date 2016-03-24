#include<iostream>
#include<cmath>
#include<stdio.h>

using namespace std;

                   
int main()
{
    long long n,sum=0;
    scanf("%lld" ,&n);
    int ar[n];
    for(long long i=0;i<n;i++)
    {
                scanf("%d", &ar[i]);
    }
    for(long long i=0;i<n;i++)
    {
                  for(int j=i;j<n;j++)
                  {
                      sum+=abs(ar[i]-ar[j]);
                  }
    }
    cout<<(sum);
    
    return 0;
}    
