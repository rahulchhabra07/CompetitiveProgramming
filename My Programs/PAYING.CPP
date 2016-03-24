#include<iostream.h>
#include<conio.h>


int p2(int n)
{
	int ct=1;
	for (int i=1;i<=n;i++)
	{
		ct*=2;
	}
	return ct;
}


void main()
{
	clrscr();
	cout<<"Enter the total number of prices"<<endl;
	int n,sum,m;
	cin>>n;
	cout<<"Enter the required sum"<<endl;
	cin>>m;
	cout<<"Enter the prices"<<endl;
	int *pr=new int[n];
	for(int l=0;l<n;l++)
	{
		cin>>pr[l];
	}
	cout<<endl;
	for(int i=1;i<p2(n);i++)
	{
		sum=0;
		for(int j=0;j<n;j++)
		{
			if(i&(1<<j))
			{
				sum+=pr[j];
			}
		}
		if (sum==m)
		{
			for(int k=0;k<n;k++)
			{
				if(i&(1<<k))
				{
					cout<<pr[k]<<" ";
				}
			}
			cout<<endl;
		}

	}
	getch();
}