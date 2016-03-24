#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,x=0;
    cin>>n;
    cin.ignore(5,'\n');
    char s[5];
    for(int i=0;i<n;i++)
    {
            gets(s);
            if(s[1]=='+')
            {
                         x++;
            }
            else
            {
                x--;
            }
    }
    cout<<x;
    return 0;
}
            
