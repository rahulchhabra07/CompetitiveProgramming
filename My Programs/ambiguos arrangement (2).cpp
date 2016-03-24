#include<iostream>
using namespace std;


int main()
{
    int a;
    do
    {
        cin>>a;
        if(!a)
        {
              return a;
        }
        else
        {
            int ar[a],flag=1;
            for(int i=0;i<a;i++)
            {
                    cin>>ar[i];
            }
            for(int i=0;i<a;i++)
            {
                    if(ar[ar[i]-1]!=i+1)
                    {
                                  flag=0;
                    }
            }
            if(flag)
            {
                    cout<<"ambiguous\n";
            }
            else
            {
                cout<<"not ambiguous\n";
            }
            
        }
    }
    while(1);
}
                    
                    
                    
                          
