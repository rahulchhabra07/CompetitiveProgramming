#include<iostream>
using namespace std;
int main()
{
    int ar[]={1,0,10,0,122,12};
    int n=6,j;
    for(int i=0;i<n;i++)
    {
            if(!ar[i])
            {
                      for(int j=i;j<n;j++)
                      {
                              ar[j]=ar[j+1];
                             
                      }
                      
            }
            
    }
    
    for(int i=0;i<n;i++)
    {
            cout<<ar[i]<<endl;
    }
    cin>>n;
    return 0;

            
    
}
