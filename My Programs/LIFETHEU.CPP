#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n;
	label:
	cin>>n;
	if(n!=42)
	{
		cout<<n<<endl;
		goto label;
	}
	else
	getch();
}