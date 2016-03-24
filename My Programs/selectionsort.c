//Selection Sort

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
	int position;
	for ( i = 0 ; i < ( n - 1 ) ; i++ )
   	{
        	position = i;
 		for ( j = i + 1 ; j < n ; j++ )
      		{
         		if ( ar[position] > ar[j] )
            			position = j;
      		}
      		if ( position != i )
      		{
         		swap = ar[i];
         		ar[i] = ar[position];
         		ar[position] = swap;
      		}
   	}
	for(i=0;i<n;i++)
	{
		printf("%d ",ar[i]);
	}
	return 0;
}
