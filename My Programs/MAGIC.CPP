#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	clrscr();
	int a, n=0;
	cout<<"Choose any number from 0 to 31"<<endl<<"Press any key to continue"<<endl;;
	getch();
	clrscr();
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<32;j++)
		{
			if(1&(j>>i))
			{
				cout<<j<<endl;
			}
		}
		cout<<endl<<"If The number belongs to this list, enter 1,"<<"else enter 0"<<endl;
		cin>>a;
		if(a)
		{
			n+=pow(2,i);
		}
		clrscr();
	}
	cout<<"The chosen number is  "<<n;
	getch();
}

