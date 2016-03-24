#include<iostream.h>
#include<conio.h>
#include<fstream.h>


void swap(int &a, int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}

void main()
{
	clrscr();
	ifstream fin ("a.txt");
	int a=0, b, s=0, s1=0, ct=0,ct1=0,i=1;
	do
	{
		fin>>b;
		if(b>a)
		{
			ct1++;
			s1+=b;
		}
		if(ct1>ct)
		{
			s=s1;
			ct=ct1;
		}
		swap(b,a);
		i++;
	}
	while(i<1000);
	cout<<s1;
	getch();
}

