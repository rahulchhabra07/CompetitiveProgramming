#include<iostream>
using namespace std;
int main()
{
          int tes;
          cin>>tes;
          for(int u=1;u<=tes;u++)
          {
                  int i,c,d,n,m;
                  cin>>i>>c>>d;
                  n=i/c;
                  m=n;
                  while(m>d)
                  {
                            n+=m/d;
                            m=m%d+m/d;
                  }
                  cout<<n;
          }
          return 0;
}
                            
                  
                  
