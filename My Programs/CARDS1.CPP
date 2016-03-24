#include<iostream.h>
#include<conio.h>
long p2(long n)
{
	long k=1;
	for(long i=0;i<n;i++)
	k=k*2;
	return k;
}
void main()
{       clrscr();
	int n;
	while(n!=0)
	{
		cin>>n;
		if(!n){break;}else{
		if(n==1)
		cout<<1<<endl;
		else
		{
			for(int i=1; p2(i)<n;i++)
			{}
			if(p2(i)==n)
			{
			cout<<p2(i)<<endl;
			}
			else
			{
			cout<<(n-p2(i-1))*2<<endl;

			}
		}}
	}getch();
}
