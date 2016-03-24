#include<iostream>
#include<iomanip>
using namespace std;


int nd(int a)
{
    int ct=0;
    while(a)
    {
            a/=10;
            ct++;
    }
    return ct;
}
int main()
{
    float b;
    int e;
    cin>>e>>b;
    if(!(e%5)&&(b>e+0.5))
    {
                         b=b-(e+0.5);
    }
    int d;
    d=nd(int(b));
    cout<<setprecision(d+2)<<b;
    system("pause");
    return 0;
}
