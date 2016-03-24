#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int tes,tot,don,b,c,ct=0;
	cin>>tes;
	for(int a=1;a<=tes;a++)
	{
		cin>>tot>>don;
		c=tot-don;
		int *ass=new int[c/2];
		int *ar=new int[tot];
		for(int i=0;i<tot;i++)
		{
			ar[i]=1;
		}
		for(int j=1;j<=don;j++)
		{
			cin>>b;
			ar[b-1]=0;
		}
		for(int k=0;k<tot;k++)
		{
			if (ar[k])
			{
				ct++;
				if(ct%2)
				{
					cout<<k+1<<" ";
				}
				else
				{
					for(int l=0;l<c/2;l++)
					ass[l]=k+1;
				}
			}
		}
		cout<<endl;
		for(int m=0;m<c/2;m++)
		{
			cout<<ass[m]<<" ";
		}
	}
	getch();
}