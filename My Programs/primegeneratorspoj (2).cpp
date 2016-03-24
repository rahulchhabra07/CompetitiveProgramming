#include<iostream>
using namespace std;

long long prim(long n)
{
    if(n==2||n==3)
    {
                  return 1;
    }
    if(n==1)
    {
            return 0;
    }
    if(!(n%2)||!(n%3)||((n!=5)&&((n%10)==5)))
    {
                      return 0;
    }
    long long j=2,flag=1;
    for(long long i=5;i*i<=n;i+=j,j=6-j)
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
    long long tes;
    cin>>tes;
    for(long long a=0;a<tes;a++)
    {
            long long m,n;
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
    //system("pause");
    return 0;           
}                     
            
    
