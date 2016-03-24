/*
Rahul Chhabra
1500080
*/

#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
typedef long long ll;

ll nonrep(ll a,ll ar[],ll n,ll m)
{
 	 ar[a]=1;
 	 for(ll j=0;j<a;j++)
 	 {
 	 			ar[a]*=2;
			  ar[a]%=m;
 	 			
   } 	 
	 //cout<<ar[a];				
	 for(ll i=1;i<a;i++)
	 {
	 				if(!(a%i))
	 				{
 					 					ar[a]-=ar[i];    //mod m;
 					 					
 					}
		}
}

int main()
{
 		ll n,m;
 		cin>>n>>m;
 		ll ar[n+1];
 		ar[1]=2;
 		for(ll i=2;i<=n;i++)
 		{
 		 			 if(!(n%i))
 		 				nonrep(i,ar,n,m);
    }
    while(ar[n]<0)
    {
     							ar[n]+=m;
    }
 		cout<<ar[n]%m;
 		return 0;
 		//}
}
		
 					
	 				 					
	 				 					
					
	 				






