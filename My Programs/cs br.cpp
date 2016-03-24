#include<iostream>
using namespace std;
int main()
{
    const int a=1579,b=5899,s=25000;
    int t,r=0,j;
    for(int i=0;i<6;i++)
    {
            j=(s-b*i)/a;
            t=b*i+a*j;
            if(t>r)
            {
                   r=t;
            }
            cout<<r<<endl;
    }
    cout<<endl<<r<<endl;
    system("pause");
    return 0;
}
            
            
