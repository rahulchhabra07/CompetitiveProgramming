#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int tes,n,max;
	long el;
	cin>>tes;
	for(int a=1;a<=tes;a++)
	{
		cin>>n;
		el=100000;
		int *ar=new int[n];
		int *arr=new int[n];
		for(int i=0;i<n;i++)
		{
			cin>>ar[i];
		}
		for( i=0;i<n;i++)
		{
			arr[i]=0;
		}
		for( i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(ar[j]==ar[i])
				{
					arr[i]++;
				}
			}
		}
		max=arr[0];
		for( i=1;i<n;i++)
		{
			if(arr[i]>max)
			{
				max=arr[i];
			}
		}
		for( i=0;i<n;i++)
		{
			if(arr[i]==max)
			{
				if(ar[i]<el)
				{
					el=ar[i];
				}
			}
		}
		cout<<el<<endl<<max;
	}
	getch();
}



