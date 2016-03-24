#include<iostream>
#include<algorithm>
using namespace std;



long long fact(int n)
{
		if(n==0||n==1)
		{
				return 1;
		}
		else
		{
				return n*fact(n-1);
		}
}


int comb(int n,int r)
{
		return fact(n)/(fact(n-r)*fact(r));
}



unsigned long long
choose(unsigned long long n, unsigned long long k) {
    if (k > n) {
        return 0;
    }
    unsigned long long r = 1;
    for (unsigned long long d = 1; d <= k; ++d) {
        r *= n--;
        r /= d;
    }
    return r;
}

int main()
{
		int tes;
		cin>>tes;
		int ar[11];
		for(int u=0;u<tes;u++)
		{
				for(int i=0;i<11;i++)
				{
						cin>>ar[i];
				}
				int n;
				cin>>n;
				sort(ar,ar+11);
				cout<<choose(count(ar,ar+11,ar[n-1]),count(ar+n-1,ar+11,ar[n-1]))<<'\n';
		}
		return 0;
}
				
