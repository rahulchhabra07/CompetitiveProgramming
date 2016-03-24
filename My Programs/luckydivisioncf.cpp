#include<iostream>
using namespace std;


int chk(int k)
{
    int n;
    while(k)
    {
            n=k%10;            
            if(n!=4&&n!=7)
            {
                          return 0;
            }
            k/=10;
    }
    return 1;
}



int main()
{
    int n;
    cin>>n;
    for(int i=4;i<=n;i++)
    {
            if(!(n%i))
            {
                      if(chk(i))
                      {
                                cout<<"YES";
                                return 0;
                      }
            }
    }
    cout<<"NO";
    return 0;
}
    
