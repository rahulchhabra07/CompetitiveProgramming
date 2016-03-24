#include<iostream>
using namespace std;
int main()
{
    long tes;
    cin>>tes;
    for(long a=1;a<=tes;a++)
    {
             long long n,ct=0;
             cin>>n;
             while(n)
             {
                     n/=5;
                     ct+=n;
             }
             cout<<ct<<endl;
    }
    //system("pause");
    return 0;
}
