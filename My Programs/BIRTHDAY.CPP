#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int tes,min,b;
	int ar[10];
	cin>>tes;
	for(int a=1;a<=tes;a++)
	{
		for(int i=0;i<10;i++)
		{
			cin>>ar[i];
		}
		ar[0]++;
		min=ar[0];
		b=0;
		for(int j=1;j<10;j++)
		{
			if(ar[j]<min)
			{
				min=ar[j];
				b=j;
			}
		}
		if(!b)
		{
			cout<<1;
			for(int k=0;k<min;k++)
			{
				cout<<0;
			}
		}
		else{
		for(int k=0;k<=min;k++)
		{
			cout<<b;
		}    }
	}
	getch();
}