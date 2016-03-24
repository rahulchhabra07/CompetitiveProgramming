#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int bin[50];
	int i=0;
	while(n)
	{
		bin[i]=n%2;	
		n/=2;
		i++;
	}
	i--;
	for(i;i>=0;i--)
	{
		printf("%d",bin[i]);
	}
	printf("\n");
	return 0;
}
