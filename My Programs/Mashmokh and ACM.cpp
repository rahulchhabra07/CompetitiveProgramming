#include<bits/stdc++.h>
using namespace std;
long long M=1000000007;
vector<long long> vf;
long long dp(long long n,long long k)
{
		long long ans =0;
		if(k==1)
		{
				for(unsigned long long i=0;i<(vf.size());i++)
		{				
				if(!(n%vf[i]))
				{					
					ans++;
					ans%=M;
				}
				
				
		}	return ans;	
		}
		//long long ans =0;
		for(unsigned long long i=0;i<(vf.size());i++)
		{				
				if(!(n%vf[i]))
				{					
					ans+= (dp(n/vf[i],k-1)%M);
				}
				
		}
		return ans;
}

int main()
{
		long long n,k;
		cin>>n>>k;
		long long ans=0;
		
		for(int p=1;p<=n;p++)
		{
			
			vf.clear();
			for(long long i=1;i<=p;i++)
		{
				if(!(n%i)){	vf.push_back(i);} //cout<<i<<' ';}
		}
			
			{			
			//cout<<dp(p,k)<<' ';
		 	ans+=dp(p,k);
		 }
		 	//cout<<'\n';
		}
		cout<<ans;
		return 0;
}
