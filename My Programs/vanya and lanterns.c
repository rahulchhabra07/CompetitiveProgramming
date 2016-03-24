#include<stdio.h>

int main()
{
	long long int n,l;
	scanf("%lld%lld",&n,&l);
	int ar[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%lld",&ar[i]);
	}
	int j,swap;
	for(i=0;i<(n-1);i++)
	{
		for(j=0;j<(n-i-1)
		{
			if(ar[j]>ar[j+1])
			{
				swap=ar[j];		
				ar[j]=ar[j+1];
				ar[j+1]=swap;
			}
		}
	}
	float maxr[n+2];
	maxr[0]=ar[0];
	for(i=1;i<n;i++)
	{
		maxr[i]=(ar[i+1]-ar[i])/2;
	}
	maxr[n+1]=l-ar[n-1];
	float maximum=0;
	for(i=0;i<n+2;i++)
	{
		if(maxr[i]>maximum)
		{
			maximum=maxr[i];
		}
	}
	printf("%f\n",maximum);
	return 0;
}
	
	
