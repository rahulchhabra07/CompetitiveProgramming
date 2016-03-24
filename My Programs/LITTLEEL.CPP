#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int tes,n,c,ct,b;
	cin>>tes;
	for(int a=1;a<=tes;a++)
	{
		ct=0;
		cin>>n>>c;
		for(int i=1;i<=n;i++)
		{
			cin>>b;
			ct+=b;
		}
		if(ct<=c)
		{
			cout<<"Yes";
		}
		else
		{
			cout<<"No";
		}
	}
	getch();
}
