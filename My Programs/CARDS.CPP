#include<iostream.h>
#include<conio.h>
int answer(int n)
{
	int* ar=new int[n];

	for(int i=0; i<=(n-1); i++)     // builds array of numbers from 1 to n
	{
		ar[i]=(i+1);
	}
	int k;
	k=n;
	int* ar=new int[k];
	label:

	if (k==1){return ar[0];}
	else
	{
	if (k%2)         // checks length of array
	{                               // if odd
		int k;
		k=(n+1)/2;
		int* ar1=new int[k];
		ar1[0]=n;
		for (int i = 1; i<=k; i++)
		{
			int j;
			j=2*i-1;
			ar1[i]=ar[j];
		}
	}
	else                            // if even
	{
		int k;
		k=n/2;
		int* ar1=new int[k];
		for (int i=0; i<=(k-1); i++)
		{
			int j;
			j=2*i;
			ar1[i]=ar[j];
		}
	}}


	k=(k+1)/2;

	for (i=0; i<=(k-1); i++)
	{
		ar[i]=ar[i];
	}
	goto label;
}
void main()
{
	clrscr();
	int n;
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		int a;
		cin>>a;
		cout<<answer(a);
	}
	getch();
}

