#include<iostream>
#include<cmath>
using namespace std;


void swap(int &a,int &b)
{
     a=a+b;
     b=a-b;
     a=a-b;
}

int main()
{
    int n,a,b,d[2];
    d[0]=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
            cin>>a>>b;
            d[1]=a-b;
            if(abs(d[0])<abs(d[1]){
                                        swap(d[0],d[1]);
            }
    }
    if(d[0]>0)
    {
              cout<<1<<' '<<d[0];
    }
    else
    {
        cout<<2<<' '<<-d[0];
    }
    return 0;
}
    
