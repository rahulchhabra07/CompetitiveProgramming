#include<stdio.h>

int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int ar[a],br[b];
	int p=0;
	for(p=0;p<a;p++)
	{
		scanf("%d",&ar[p]);
	}
	for(p=0;p<b;p++)
	{	
		scanf("%d",&br[p]);
	}
	int Union[a+b],inter[a+b];
	int i=0,j=0,k=0;
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			if(ar[i]==br[j])
			{
				inter[k]=ar[i];
				k++;
			}
		}
	}
	for(i=0;i<a;i++)
	{
		Union[i]=ar[i];
	}
	int l=a;
	int fl=0;
	for(i=0;i<b;i++)
	{
		fl=0;
		for(j=0;j<a+b;j++)
		{
			if(br[i]==inter[j])
			{
				fl=1;
			}
		}
		if(!fl)
		{
			Union[l]=br[i];
			l++;
		}
	}
	printf("\nUnion\n");
	for(i=0;i<l;i++)
	{
		printf("%d ",Union[i]);
	}
	printf("\nINTERSECTION\n");
	for(i=0;i<k;i++)
	{
		printf("%d ",inter[i]);
	}
	printf("\n");
	return 0;
}	

			









			
			
