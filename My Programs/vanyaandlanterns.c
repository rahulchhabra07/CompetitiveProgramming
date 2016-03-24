#include<stdio.h>

int main()
{
	long int n,l;
	scanf("%ld%ld",&n,&l);
	int ar[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	int j,swap;
	for(i=0;i<(n-1);i++)
	{
		for(j=0;j<(n-i-1);j++)
		{
			if(ar[j]>ar[j+1])
			{
				swap=ar[j];		
				ar[j]=ar[j+1];
				ar[j+1]=swap;
			}
		}
	}
	double maxr[n+1];
	maxr[0]=ar[0];
	for(i=1;i<n;i++)
	{
		maxr[i]=(double) (ar[i]-ar[i-1])/2;
	}
	maxr[n]=l-ar[n-1];
	double maximum=0;
	for(i=0;i<n+1;i++)
	{
		if(maxr[i]>maximum)
		{
			maximum=maxr[i];
		}
	}
	/*for(i=0;i<n+1;i++)
	{
		printf("%lf ",maxr[i]);
	}*/
	printf("%lf\n",maximum);
	return 0;
}
	
	
