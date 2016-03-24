#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{   
        long n,k=1;
        cin>>n;
        long ar[n];
        for(long i=0;i<n;i++)
        {
                cin>>ar[i];
                if(ar[i])
                ar[i]=-1;
                else
                ar[i]=1;
        }
        long s=0;
        for(int i=0;i<k;i++)
        {
                s+=ar[i];
        }
        long m;
        m=s;
        long b;
        b=m;
        for(int i=k;i<n;i++)
        {   
                s = s + ar[i] - ar[i-(k)];
                 m = max(m + ar[i], s);
                 b=max(b,m);
            }
            /*for(int i=k-1;i<n;i++)
            {
                    cout<<m<<' ';
            }*/
            cout<<b;
            return 0;
}
 
