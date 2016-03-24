// Linear search

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
	int key;
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(ar[i]==key)
		{
			printf("Element found at position: %d\n",i+1);
		}
	}
	return 0;
}
