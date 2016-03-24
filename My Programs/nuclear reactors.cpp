#include<iostream>


using namespace std;



     



int main()
{
    int k,n,i=0;
    long a;
    cin>>a>>n>>k;
    while(a&&i<k)
    {
            cout<<a%(n+1)<<' ';
            a/=(n+1);
            i++;
    }
    while(i<k)
    {
              cout<<0<<' ';
              i++;
    }
    cout<<'\n';
    return 0;
}
    
    
