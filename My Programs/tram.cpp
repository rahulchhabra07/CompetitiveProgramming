#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int max=0,c,g,t=0;
    for(int i=0;i<n;i++)
    {
            cin>>g>>c;
            t=t+c-g;
            if(t>max)
            {
                      max=t;
            }
            
    }
    cout<<max;
    return 0;
}
            
                     
