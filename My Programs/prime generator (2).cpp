#include<iostream>
using namespace std;

int prim(long n)
{
    if(n==2||n==3)
    {
                  return 1;
    }
    if(n==1||!(n%2)||!(n%3))
    {
                            return 0;
    }
    int j=2;
    for(long i=5;i*i<=n;i+=j,j=6-j)
    {
             if(!(n%i))
             {
                       return 0;
             }
    }
    return 1;
}

int main()
{
    iostream::sync_with_stdio(false);
    int tes;
    cin>>tes;
    for(int u=0;u<tes;u++)
    {
            long m,n;
            cin>>m>>n;
            for(long i=m;i<=n;i++)
            {
                     if(prim(i))
                     {
                                cout<<i<<endl;
                     }
            }
            cout<<endl;
    }
    return 0;
}
