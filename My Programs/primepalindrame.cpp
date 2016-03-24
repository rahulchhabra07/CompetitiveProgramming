/*
ID: rahulch1
PROG: pprime
LANG: C++                  
*/

#include<bits/stdc++.h>

using namespace std;

    

long long prim(long long n)
{
    if(n==1)
    {
            return 0;
    }
    if(n==2||n==3)
    {
                  return 1;
    }
    if(!(n%2)||!(n%3))
    {
                      return 0;
    }
    long long flag=1,j=2;
    for(long long i=5;i<=sqrt(n);i+=j,j=6-j)
    {
            if(!(n%i))
            {
                      flag=0;
            }
    }
    return flag;
}



int pal(long long n)
{
    long long m=0,temp;
    temp=n;
    while(n)
    {
            m*=10;
            m+=n%10;
            n/=10;
    }
    return m==temp;           
}





int main()
{
		ofstream fout ("pprime.out");
    ifstream fin ("pprime.in");
    long long a,b;
    cin>>a>>b;
    for(long long i=a;i<=b;i++)
    {
            if(pal(i))
            {
                       if(prim(i))
                       {
                                  cout<<i<<'\n';
                       }
            }
    }
    return 0;
}
         
            
