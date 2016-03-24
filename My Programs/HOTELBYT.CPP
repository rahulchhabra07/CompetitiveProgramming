#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int tes,n,max;
	int tim[1000];
	cin>>tes;
	for(int a=1;a<=tes;a++)
	{
		cin>>n;
		int *ar=new int[2*n];
		for(int i=0;i<2*n;i++)
		{
			cin>>ar[i];
		}
		for(int k=0;k<1000;k++)
		{
			tim[k]=0;
		}
		for(int j=0;j<n;j++)
		{
			for(int l=ar[j];l<ar[n+j];l++)
			{
				tim[l-1]++;
			}
		}
		max=tim[0];
		for(int m=0;m<100;m++)
		{
			if(tim[m]>max)
			{
				max=tim[m];
			}
		}
		cout<<max;
	}
	getch();
}