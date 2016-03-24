#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int tes,n,x,ct,s,temp,flag;
	cin>>tes;
	for(int a=1;a<=tes;a++)
	{
		cin>>n>>x;
		ct=flag=0;
		int *ar=new int[n];
		for(int i=0;i<n;i++)
		{
			cin>>ar[i];
			ct+=ar[i];
		}
		s=ct/x;
		for(i=0;i<n;i++)
		{
			temp=ct;
			temp-=ar[i];
			if(temp/x==s)
			{
				flag=-1;
			}
		}
		if(flag==-1)
		{
			cout<<-1;
		}
		else
		{
			if(!flag)
			{
				cout<<s;
			}
		}
	}
	getch();
}
