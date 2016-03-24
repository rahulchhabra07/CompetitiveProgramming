#include<iostream>
using namespace std;
int main()
{
    long long n, k;
    int ct=0;
    cin>>n>>k;
    for(long long i=0;i<n;i++)
    {
             long long t;
             cin>>t;
             if(!(t%k))
             {
                       ct++;
             }
    }
    cout<<ct;
    //system("pause");
    return 0;
}
