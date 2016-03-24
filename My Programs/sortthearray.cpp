#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	long a[n], b[n];
	int i;
	for(i = 0; i < n; i++)
	{
		scanf("%ld", &a[i]);
		b[i]=a[i];
	}

	/*int j;
	long swap;
	for(i = 0; i < (n - 1); i++)
	{
		for(j = 0; j < (n - i - 1); j++)
		{
			if(a[j] > a[j + 1])
			{
				swap = a[j];
				a[j] = a[j + 1];
				a[j + 1] = swap;
			}
		}
	}*/
	sort(a, a + n);

	int l = -1;
	for(i = 0; i < n; i++)
	{
		if(a[i] != b[i])
		{
			l = i;
			break;
		}
	}
	int r = -1;
	for(i = (n - 1); i >= 0; i--)
	{
		if(a[i] != b[i])
		{
			r = i;
			break;
		}
	}
	
	if(l == -1 && r == -1)
	{
		printf("yes\n%d %d", 1, 1);
	}
	else
	{
		//printf("%d %d\n", l, r);
		int swap;
		for(i =0; i <= (r - l) / 2 ; i++)
		{
			swap = b[i + l];
			b[i + l] = b[r - i];
			b[r - i] = swap;
		}
		int ok = 1;
		for(i = 0; i < n; i++)
		{
			//printf("%ld ", b[i]);
			if(a[i] != b[i])
			{
				ok = 0;
				break;
			}
		}
		if(ok)
		{
			printf("yes\n%d %d", l + 1, r + 1);
		}
		else
		{
			printf("no\n");
		}
	}
	return 0;
}
