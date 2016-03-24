#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	clrscr();
	int n,c=4;
	cin>>n;
	int *ar=new int[n*c];
	for(int i=0;i<n;i++)
	{
		cin>>ar[i*c];
		cin>>ar[i*c+1];
		if(ar[i*c]>ar[i*c+1])
		{
			ar[i*c+2]=1;
		}
		else
		{
			ar[i*c+2]=2;
		}
		ar[i*c+3]=abs(ar[i*c]-ar[i*c+1]);
	}
	int a,b;
	b=ar[2];
	a=ar[3];
	for(int j=1;j<n;j++)
	{
		if (a<ar[j*c+3])
		{
			a=ar[j*c+3];
			b=ar[j*c+2];
		}
	}
	cout<<"The winner is player "<<b<<" with a lead of "<<a;
	getch();
}
