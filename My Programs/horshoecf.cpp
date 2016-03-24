#include<iostream>
using namespace std;
int main()
{
    long ar[4];
    cin>>ar[0]>>ar[1]>>ar[2]>>ar[3];
    for(int i=0;i<4;i++)
    {
            for(int j=i+1;j<4;j++)
            {
                    if(ar[i]==ar[j])
                    {
                                    ar[j]=0;
                    }
            }
    }
    int ct=0;
    for(int i=0;i<4;i++)
    {
            if(!ar[i])
            {
                     ct++;
            }
    }
    cout<<ct;
    return 0;
}
