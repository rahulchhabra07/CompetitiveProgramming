#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int ar[n];
	int i;
	for(i=0;i<n;i++)	
	{
		scanf("%d",&ar[i]);
	}
	for(i=0;i<n-1;i++)
	{
		if(ar[i]>ar[i+1])
		{		
			printf("The unsorted element is %d.\nIts position in array is %d.\n",ar[i+1],i+2);
			break;
		}
	}
	return 0;
}
