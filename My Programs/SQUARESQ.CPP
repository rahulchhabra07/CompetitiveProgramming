#include<iostream.h>
#include<conio.h>
#include<math.h>

long chksq(long n)
{
	floor(sqrt(n))==sqrt(n)?return 1:return0;
}

void main()
{
	int n;
	for(int i= 1; i<=n; i++)
	{
		long a,b;
		cin>>a>>b;
		for(int j=a; j<=b;j++)
		{
			if(chksq(j))
			{
				int k;
