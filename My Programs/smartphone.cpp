#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long ar[n];
    for(long long i=0;i<n;i++)
    {
             scanf("%lld",ar[i]);
    }
    long long min,in,max,tem;
    do 
    {
         
         min=ar[0],tem=n,max=0;
         for(long long i=0;i<n;i++)
         {        
                      if(ar[i]<min)
                      {
                          min=ar[i];
                       
                      }
         }
         if(max>=min*tem)
         {
                         max=min*tem;
         }
         tem--;
         
    }
    while(max>(min*tem));
    cout<<max;
    return 0;
}
