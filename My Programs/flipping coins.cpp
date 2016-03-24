#include<iostream>
using namespace std;

int main()
{
          int n,q;
          cin>>n>>q;
          bool ar[n];
          
          for(int i=0;i<n;i++)
          {
                  ar[i]=0;
          }
          for(int u=1;u<=q;u++)
          {
                  int a,b,c,ct=0;
                  cin>>a>>b>>c;
                  for(int i=b;i<=c;i++)
                  {
                          if(a)
                          {
                               ct+=ar[i];
                               
                          }
                          else
                          {
                              if(!a)
                              {
                                    ar[i]=!ar[i];
                              }
                          }
                  }
                  if(a)
                  {
                       cout<<ct<<endl;
                  }
          }    
          //system("pause");
          return 0;
}
