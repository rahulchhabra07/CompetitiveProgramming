#include<iostream>
using namespace std;



int bin(int n)
{
    int ct=0;
    for(int i=0;i<11;i++)
    {
            if(1&(n>>i))
            {
                      ct++;
            }
    }
    return ct;
}


int main()
{
    for(int i=999;i>0;i--)
    {
            if(bin(i)==5)
            {
                          cout<<i;
                          break;
            }
    }
    //cout<<bin();
    system("pause");
    return 0;
}
