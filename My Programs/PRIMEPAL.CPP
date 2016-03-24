#include<iostream.h>
#include<conio.h>
#include<math.h>

int pal(int n)
{
	int ct=0;
	int temp;
	temp=n;
	while(n)
	{
		ct*=10;
		ct+=n%10;
		n/=10;
	}
	return(temp==ct);
}

int prime(int n)
{
	int a;
	for(int i=ceil(sqrt(n));i<n-1;i++)
	{
		if(!(n%i))
		{
			return 0;
		}
	}
	return 1;

}

void main()
{
	clrscr();
	int n;
	cin>>n;
	for(int i=n+1;i>n;i++)
	{
		if(pal(i))
		{
			if(prime(i))
			{
				cout<<i;
				break;
			}
		}
	}
	getch();
}

