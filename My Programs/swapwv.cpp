#include<iostream>
using namespace std;

int main()
{
    int a=5,b=16;
    cin>>a>>b;
    a=a+b-(b=a);
   
    cout<<a<<b;
    return 0;
}
