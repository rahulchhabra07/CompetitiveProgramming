#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n,temp;
	cin>>n;
	int *ar=new int[n];
	for(int a=0;a<n;a++)
	{
		cin>>ar[a];
	}
	for(a=0;a<n;a++)
	{
		ar[a]--;
	}
	for(int i=0;i<n;i++)
	{
		while(ar[i])
		{
			cout<<i+1;
			temp=i;
			i=ar[i];
			ar[temp]=0;
		}
		cout<<endl<<endl;
	}
	getch();
}