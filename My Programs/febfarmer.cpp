#include<iostream>
using namespace std;

int prim(int n)
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
    int j=2;
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
                  int p,q,flag=1;
                  cin>>p>>q;
                  for(int i=p+q+1;flag;i++)
                  {
                          if(prim(i))
                          {
                                      cout<<i-p-q<<endl;
                                      flag=0;
                          }
                  }
          }
          return 0;
}
                          
                                
