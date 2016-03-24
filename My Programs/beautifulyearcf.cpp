#include<iostream>
using namespace std;


int chk(int n)
{
    int ar[4];
    for(int i=0;i<4;i++)
    {
            ar[i]=n%10;
            n/=10;
    }
    for(int i=0;i<4;i++)
    {
            for(int j=i+1;j<4;j++)
            {
                    if(ar[i]==ar[j])
                    {
                                    ar[j]=11;
                    }
            }
    }
    int ct=0;
    for(int i=0;i<4;i++)
    {
            if(ar[i]==11)
            {
                     ct++;
            }
    }
    return !ct;
}


int main()
{
    int a,flag=1;
    cin>>a;
    a++;
    while(flag)
    {
               if(chk(a))
               {
                        flag=0;
                        cout<<a;
               }
               else
               {
                   a++;
               }
    }
    return 0;
}
    
            
