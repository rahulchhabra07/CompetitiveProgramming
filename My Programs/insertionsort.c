//Insertion Sort

#include<stdio.h>

int main()
{	
	int n;
	scanf("%d",&n);
	int ar[n];
	int i,j,swap;
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	for (i = 1 ; i <= n - 1; i++) 
	{
		j = i;
     		while ( j > 0 && ar[j] < ar[j-1]) 
		{
		      swap          = ar[j];
      		      ar[j]   = ar[j-1];
      		      ar[j-1] = swap;
 		      j--;
    		}
  	}
	for(i=0;i<n;i++)
	{
		printf("%d ",ar[i]);
	}
	return 0;
}
