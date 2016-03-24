#include<iostream>
using namespace std;

int lcm(int a, int b)
{
            int k;
            for(int i=1;i<=b;i++)
            {
                    if(!((a*i)%b))
                    {
                                  return a*i;
                    }
            }
}



int main()
{
    int a,b,c,d,n;
    cin>>a>>b>>c>>d>>n;
    cout<<((n/a+n/b+n/c+n/d)-(n/lcm(a,b)+n/lcm(a,c)+n/lcm(a,d)+n/lcm(b,c)+n/lcm(b,d)+n/lcm(c,d))+(n/lcm(lcm(a,b),c)+n/lcm(lcm(a,b),d)+n/lcm((a,c),d)+n/lcm((b,c),d))-n/lcm((a,b),lcm(c,d)));
    //system("pause");
    return 0;
}
