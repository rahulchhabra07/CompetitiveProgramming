#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int tes,n,ct,tc,max;
	int ar[11];
	int sum[165];
	cin>>tes;
	for(int a=1;a<=tes;a++)
	{
		for(int i=0;i<11;i++)
		{
			cin>>ar[i];
		}
		cin>>n;
		for(int l=0;l<165;l++)
		{
			sum[l]=0;
		}
		for(int j=3;j<=(1024+512+256);j++)
		{
			ct=0,tc=0;
			for(int k=0;k<11;k++)
			{
				if(j&(1<<k))
				{
					ct++;

				}
			}

			if(ct==3)
			{
				sum[tc]=j;
				tc++;
			}
		}
		max=sum[0];
		for(int m=1;m<165;m++)
		{
			if(sum[m]>max)
			{
				max=sum[m];
			}
		}
		for(int n=0;n<165;n++)
		{
			if(sum[n]==max)
			{
				for(int o=0;o<=11;o++)
				{
					if(sum[n]&(1<<o))
					{
						cout<<ar[o]<<" ";
					}
				cout<<endl;
				}
			}
		}
	}
	getch();
}
