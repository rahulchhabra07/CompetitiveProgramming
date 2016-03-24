/*
	Rahul Chhabra
	1500080
*/
#include<iostream>
#include<climits>
//#include<set>
using namespace std;
typedef long long ll;
int main()
{
 		ll n;
 		cin>>n;
 		ll a[n],b[n];
 		for(ll i=0;i<n;i++)
 		{
					 cin>>a[i];
    }
    for(ll i=0;i<n;i++)
    {
     			 cin>>b[i];
    }
    ll ss[n][n];
  	ll mmax=LONG_LONG_MIN;
    
    for(ll i=0;i<n;i++)
    {
     			 for(ll j=0;j<n;j++)
     			 {
     			 				 if(i==j)
     			 				 {
     			 				 				 ss[i][j]=a[i];
							     }
							     else
							     {
     			 									 ss[i][j]=a[i]+a[j];
     			 									 if(i<j)
     			 									 {
     			 									 				for(ll k=i+1;k<j;k++)
     			 									 				{
     			 									 				 			 ss[i][j]+=b[k];
			 									  		 			 }
			 									  		 			 
		 				 			           }
		 				 			           if(i>j)
		 				 			           {
     			 									 		 for(ll k=i+1;k<n;k++)
	 									 		 				 {
     			 									 						ss[i][j]+=b[k];
     			 									 						
   			 									 		  	}		
																	for(ll k=0;k<j;k++)
	 									 		 				 {
     			 									 						ss[i][j]+=b[k];
     			 									 						
   			 									 		  	}		 			           				     
								             }
								   }
								   if(ss[i][j]>mmax)
								   {
								   		mmax=ss[i][j];
								   }
								   
			     }
    }
		cout<<mmax;
		return 0;
}   
									           
									           
				 				
			 
