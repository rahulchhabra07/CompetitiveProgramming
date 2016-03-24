#include<iostream>
using namespace std;


int an(int n)
{
    int i=1;
    do 
    {
           n-=5*i;
           i*=2;
    }
    while(n>0);
    return i/2;
}
    



int main()
{
    int n,i=1;
    cin>>n;
    while(n>5*i)
    {
                n-=5*i;
                i*=2;
    }
    if((n>=1)&&(n<=i))
    {
                  cout<<"Sheldon";
    }
    if((n>=i+1)&&(n<=2*i))
    {
                      cout<<"Leonard";
    }
    if((n>=2*i+1)&&(n<=3*i))
    {
                        cout<<"Penny";
    }
    if((n>=3*i+1)&&(n<=4*i))
    {
                        cout<<"Rajesh";
    }
    if((n>=4*i+1)&&(n<=5*i))
    {
                      cout<<"Howard";
    }
    // system("pause");
    return 0;
}
    
                
                
