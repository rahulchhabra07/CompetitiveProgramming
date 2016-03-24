#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int ar[n];
    for(int i=0;i<n;i++)
    {
                        ar[i]=0;
    }
    int ct=0;
    for(int u=1;u<=k;u++)
    {
            char a[5];
            cin>>a;
            if(a[2]=='I')
            {
                         int b;
                         cin>>b;
                         if(ar[b-1])
                         {
                                    ar[b-1]=0;
                                    --ct;
                         }
                         else
                         {
                                    ar[b-1]=1;
                                    ++ct;
                         }
            }
            if(a[2]=='O')
            {
                         for(int i=0;i<n;i++)
                         {
                                 ar[i]=0;
                         }
                         ct=0;
            }
            cout<<ct<<endl;
    }
    //cout<<ct<<endl;
    return 0;
}
                         
