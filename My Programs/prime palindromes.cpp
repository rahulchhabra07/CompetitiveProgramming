/*
ID: rahulch1
PROG: pprime
LANG: C++                  
*/

#include<bits/stdc++.h>

using namespace std;

    

int prim(long long n)
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
		if(n>9&&(n%10==0||n%10==2||n%10==4||n%10==5||n%10==6||n%10==8))
		{
				return 0;
		}
    long long m=0,temp;
    temp=n;
    int numdig=0;
    while(n)
    {
            m*=10;
            m+=n%10;
            n/=10;
            numdig++;
    }
    if(temp==11)
    	return 1;
    if(numdig%2==0)
    	return 0;
    return m==temp;           
}





int main()
{
		ofstream fout ("pprime.out");
    ifstream fin ("pprime.in");
    long long a,b;
    fin>>a>>b;
    for(long long i=a;i<=b;i++)
    {
            if(pal(i))
            {
                       if(prim(i))
                       {
                                  fout<<i<<'\n';
                       }
            }
    }
    return 0;
}
         
            
