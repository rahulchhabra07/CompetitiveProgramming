#include<iostream>
#include<cmath>
using namespace std;

int main()
{
          int a,b;
          cin>>a>>b;
          a-=b;
          a=abs(a);
          if(a%10>1)
          {
                  cout<<--a;
          }
          else
          {
                  cout<<++a;
          }
          //system("pause");
          return 0;
}
          
