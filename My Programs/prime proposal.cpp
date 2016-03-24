/*
ID: rahulch1
PROG: crypt1
LANG: C++                  
*/
#include <iostream>
#include <fstream>
#include <string>



int chk(long n, int ar[], int a)
{
		int t,fl;
		while(n)
		{
				fl=1;
				t=n%10;
				for(int i=0;i<a;i++)
				{
						if(ar[i]==t)
						{
								fl=0;
						}
				}
				if(fl)
				{
						return 0;
				}
				n/=10;
		}
		return 1;
}

int dl(long n)
{
		int ct=0;
		while(n)
		{
				n/=10;
				ct++;
		}
		return (3==ct);
}
						
				





using namespace std;

int main() 
{
    //ofstream cout ("crypt1.out");
    //ifstream cin ("crypt1.in");
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
				cin>>ar[i];
		}
		long ct=0;
		for(long s=10000;s<=99999;s++)
		{
				if(chk(s,ar,n))
				{
						if(chk(((s/100)*(s%10)),ar,n)
							 &&chk(((s/100)*((s%100)/10)),ar,n)
							 &&chk(((s/100)*(s%100)),ar,n)
							 &&dl((s/100)*(s%10))
							 &&dl((s/100)*((s%100)/10)))
							 
						{
								//cout<<s<<endl;
								ct++;
						}
				}
		}
		cout<<ct<<endl;
		return 0;
}
    
