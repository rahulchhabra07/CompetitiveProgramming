#include<iostream>
using namespace std;
bool pal(long ar[],long i,long j)
{
   while (i < j) {
      if (ar[i++] != ar[j--])
         return 0;
   }
   return 1;
}
int minpal(long ar[],int n) 
{
   long i, j, k;
   long subsize;   
   long palins[n][n];
	 for (subsize = 1; subsize <= n; subsize++)
	 {
      for (i = 0; i <= n - subsize; i++) 
			{
         j = i + subsize - 1;
         if (pal(ar, i, j))
				 {
            palins[i][j] = 1;
         }
         else 
				 {                        
            palins[i][j] = subsize;
            for (k = i; k < j; k++) 
						{
               int sum = palins[i][k] + palins[k+1][j];
               if (sum < palins[i][j])
                  palins[i][j] = sum;
            }
         }
     }
   }
   return palins[0][n-1];
}


int main() 
{
	int n;
	cin>>n;
   long ar[n] ;
	 for(int i=0;i<n;i++)
	 {
	 		cin>>ar[i];
	 }
   long min_palin = minpal(ar,n);
   cout<<min_palin;
   cout<<endl;
   return 0;
}
