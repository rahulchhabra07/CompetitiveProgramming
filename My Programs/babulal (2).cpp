#include<iostream>
#include<cstdio>

using namespace std;



long long int strength(long long int n)
{

    long long int a[n+1],r;

      if(n==1) return 2;
      if(n==2) return 7;
      if(n==3) return 9;
			a[1]=2;
			a[2]=7;
			a[3]=9;
			int i=4;
			while(i<=n)
			{
      		a[i]=(a[i-1]+(2*a[i-2])+a[i-3])%1000000007;
      		i++;
			}


    return a[n];

}
int main()
{
    int t,i;
    long long int n,x;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        x=strength(n);
        cout<<x<<endl;
    }
 return 0;
}
