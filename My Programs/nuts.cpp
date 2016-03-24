#include<iostream>
using namespace std;
int main()
{
    int k,v,b,a,r=0;
    cin>>k>>a>>b>>v;
    while(a>0)
    {             
                  if((b+1)>=k)
                  {
                              a-=k*v;
                              b-=(k-1);
                  }
                  else
                  {
                      a-=k*(b+1);
                      b=0;
                  }
                  r++;                  
    }
    cout<<r;
    return 0;
}
