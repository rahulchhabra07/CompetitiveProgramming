#include<bits/stdc++.h>
using namespace std;


long long res=0;
long long S;
long long valid_number(long long x,long long y,long long z,long long d)
{
		if(x<0||y<0||z<0||(x==0&&y==0&&z==0))
			return 0;
		if(x+y+z==1)
		{
			res+= pow(10,S-d);
			res%=1000000007;
			return 1;
		}
			
		long long a=valid_number(x-1,y,z,d-1),b=valid_number(x,y-1,z,d-1),c=valid_number(x,y,z-1,d-1);
		res+=(a*(4*pow(10,S-d)))+(b*(5*pow(10,S-d)))+(c*(6*pow(10,S-d)));
		res%=1000000007;
}

int main()
{
		long long x,y,z;
		cin>>x>>y>>z;
		S=x+y+z;
		long long d=x+y+z;
		valid_number(1,1,1,3);
		cout<<res;
		return 0;
}
		


