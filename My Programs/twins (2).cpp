#include<iostream>
using namespace std;


void swap(int a,int b)
{
     a=a+b;
     b=a-b;
     a=a-b;
}


int main()
{
    int n,sum=0,s=0;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
            cin>>ar[i];
            sum+=ar[i];
    }
    for(int i=0;i<n;i++)
    {
            for(int j=i;j<n;j++)
            {
                    if(ar[j]>ar[i])
                    {
                                   swap(ar[j],ar[i]);
                    }
            }
            s+=ar[i];
            if(s>(sum-s))
            {
                       cout<<i+1;
                       break;
            }
    }
    return 0;
}
            
                                   
