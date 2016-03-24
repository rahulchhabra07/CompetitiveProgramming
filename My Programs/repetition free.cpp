#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
int d;
long long m(int ar[])
{
		long long tc=0;
		for(int i=0;i<9;i++)
		{
				tc*=10;
				tc+=ar[i];
		}
		return tc;
}
				
				
bool a(long long n)
{
		set<int> s;
		int ct=0;
		while(n)
		{
				if((n%10)==0)
				{
						return 0;
				}
				s.insert(n%10);
				n/=10;
				ct++;
		}
		d=ct;
		if(ct==s.size())
		{
				return 1;
		}
		return 0;
}
int main()
{
		long long n;
		cin>>n;
		a(n);
		if(d>8)
		{
				int ar[9];
				for(int j=0;j<9;j++)
				{
						ar[j]=j+1;
				}
				if(n<m(ar))
				{
						cout<<m(ar);
						return 0;
				}
				for(long j=0;j<=362880;j++)
				{
						if(n>m(ar))
						{
								next_permutation(ar,ar+9);
								if(n<m(ar))
								{
										cout<<m(ar);
										return 0;
								}
						}
				}
		}
								
						
		
		for(long long i=n+1;i<=987654321;i++)
		{
				if(a(i))
				{
						cout<<i;
						//system("pause");
						return 0;
				}
		}
		cout<<0;
		return 0;
}
