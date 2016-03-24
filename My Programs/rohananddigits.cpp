#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if(a==0)
    {
            cout<<1;
    }
    else
    {
        if(a==1)
        {
               cout<<0;
        }
        else
        {
            if(a%2)
            {
                   cout<<4;
                   for(int i=1;i<a;i+=2)
                   {
                           cout<<8;
                   }
            }
            else
            {
                   cout<<40;
                   for(int i=2;i<a;i+=2)
                   {
                           cout<<8;
                   }
            }
        }
    }   
    //system("pause"); 
    return 0;
    
}      
                   
    
