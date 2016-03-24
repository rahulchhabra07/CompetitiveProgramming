#include<iostream>
using namespace std;







int main()
{
    int ar[201],n,flag=0;;
    for(int i=0;i<200;i++)
    {
            ar[i]=0;
    }
    ar[200]=1;
              
    cin>>n;
    while(n)
    {
            for(int i=0;i<=200;i++)
            {
                    ar[i]*=n;
            }
            for(int i=200;i>=0;i++)
            {
                    ar[i-1]+=ar[i]/10;
                    ar[i]%=10;
            }
    }
    for(int i=0;i<=200;i++)
    {
            if(flag||ar[i])
            {
                           flag=1;
                           cout<<ar[i];
            }
    }
    return 0;
}
    
                         
            
    
