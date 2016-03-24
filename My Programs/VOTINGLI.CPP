#include<iostream.h>
#include<conio.h>

int check(int a,int ar[])
{
	int n;
	n=sizeof(ar)/2;
	for(int i=0;i<n;i++)
	{
		if(a==ar[i])
		{
			return 1;
		}
	}
	return 0;
}

int max(int a,int c)
{
	if(a<=c)
	{
		return a;
	}
	else
	{
		return c;
	}
}


void main()
{
	clrscr();
	int n1,n2,n3,n;
	cin>>n1>>n2>>n3;
	n=max(max(n1,n2),n3);
	int *ar1=new int[n1];
	int *ar2=new int[n2];
	int *ar3=new int[n3];
	int *ar=new int[n];
	for(int i1=0;i1<n1;i1++)
	{
		cin>>ar1[i1];
	}
	for(int i2=0;i2<n2;i2++)
	{
		cin>>ar2[i2];
	}
	for(int i3=0;i3<n3;i3++)
	{
		cin>>ar3[i3];
	}
	int ct;
	for(int i=0;i<n;)
	{

		for(int i1=0;i1<n1;i1++)
		{
			ct+=check(ar1[i1],ar2);
			ct+=check(ar1[i1],ar3);
		if(ct)
		{
			ar[i]=ar1[i1];
			i++;
		}
		for(int i2=0;i2<n2;i2++)
		{
			if(!check(ar2[i2],ar))
			{
				ct+=check(ar1[i1],ar2);
				ct+=check(ar1[i3],ar2);
				if(ct)
				{
					ar[i]=ar2[i2];
					i++;
				}
			}
		}
			for(int i3=0;i3<n3;i3++)
		{
			if(!check(ar3[i3],ar))
			{
				ct+=check(ar3[i3],ar1);
				ct+=check(ar3[i3],ar2);
				if(ct)
				{
					ar[i]=ar3[i3];
					i++;
				}
			}
		}
	}
	for(int j=0;j<n;j++)
	cout<<ar[j]<<"  ";
	getch();
}
}

