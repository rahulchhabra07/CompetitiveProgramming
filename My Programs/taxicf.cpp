#include<iostream>
using namespace std;
int main()
{
    long n;
    cin>>n;
    int ct1=0,ct2=0,ct3=0,ct4=0,in,r;
    for(int a=0;a<n;a++)
    {
                          cin>>in;
                          switch(in)
                          {
                                    case 1:
                                         ct1++;
                                         break;
                                    case 2:
                                         ct2++;
                                         break;
                                    case 3:
                                         ct3++;
                                         break;
                                    case 4:
                                         ct4++;
                                         break;
                          }
    }
                          r=ct4;
                          r+=ct3;
                          ct1-=ct3;
                          r+=ct2/2;
                          ct2%=2;
                          if(ct2)
                          {
                                   r++;
                                   ct1-=2;
                          }
                          if(ct1>0)
                          {        
                                   r+=ct1/4;
                                   ct1%=4;
                                   if(ct1)
                                   {
                                          r++;
                                   }
                          }
                          cout<<r;
                          //system("pause");
                          return 0;
}
                          
                          
