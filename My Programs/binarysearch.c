// Binary search

#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int ar[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);		//Assuming Sorted numbers
	}
	int key;
	scanf("%d",&key);
	int low=0,high=n-1,mid;
	while(high>=low)
	{
		mid=(high+low)/2;
		if(ar[mid]==key)
		{
			printf("The element found at %d.\n",mid+1);
			break;
		}
		if(ar[mid]>key)
		{
			high=mid-1;
		}
		if(ar[mid]<key)
		{
			low=mid+1;
		}
	}
	return 0;
}
