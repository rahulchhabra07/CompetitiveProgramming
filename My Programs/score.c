#include<stdio.h>

int main()
{
	int n, m;
	scanf("%d%d", &m, &n);
	int ar[m];
	int i;
	for(i = 0; i < m; i++)
	{
		scanf("%d", &ar[i]);
	}
	int ct = 0;
	int j, a;
	for(i = 0; i < n; i++)
	{		
		ct = 0;
		for(j = 0; j < m; j++)
		{
			scanf("%d", &a);
			if(a == ar[j])
			{
				ct++;
			}
		}
		printf("Score of student %d is %d.\n", i + 1, ct);
	}
	return 0;
}
