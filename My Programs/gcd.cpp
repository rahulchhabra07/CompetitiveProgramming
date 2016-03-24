#include<iostream>
using namespace std;


int gcd(int a, int b)
{
    if(a>b)
    {
           a=a+b;
           b=a-b;
           a=a-b;
    }
    if(!(b%a))
    {
              return a;
    }
    else
    {
        return gcd(a,b%a);
    }
}


int main()
{
    cout<<gcd(16,20);
    system("pause");
    return 0;
}
