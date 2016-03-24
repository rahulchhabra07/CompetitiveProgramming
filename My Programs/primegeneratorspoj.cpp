#include<iostream>
using namespace std;

int prim(long n)
{
    if(n==2||n==3)
    {
                  return 1;
    }
    if(n==1)
    {
            return 0;
    }
    if(!(n%2)||!(n%3))
    {
                      return 0;
    }
    int j=2,flag=1;
    for(int i=5;i*i<=n;i+=j,j=6-j)
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
    int tes;
    cin>>tes;
    for(int a=0;a<tes;a++)
    {
            int long m,n;
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
            
    
