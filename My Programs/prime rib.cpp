/*
ID: rahulch1
PROG: sprime
LANG: C++                  
*/


#include<bits/stdc++.h>
using namespace std;


	ofstream fout ("sprime.out");
    ifstream fin ("sprime.in");


long long ispal(long long n)
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




int final;
void incr(long long num,int len)
{
		if(len==final)
		{
				fout<<num<<'\n';
		}
		for(int i=0;i<10;i++)
		{
				if(ispal(num*10+i))
				{
						incr(num*10+i,len+1);
				}
		}
}
int main()
{
	
		fin>>final;
		incr(0,0);
		return 0;
}

