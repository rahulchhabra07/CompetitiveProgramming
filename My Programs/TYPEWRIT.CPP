#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{       clrscr();
	int c;
	cout<<"Enter text. full stop to exit"<<endl;
	do {
		c= getchar();
		cout<<char (c);
	}
	while (c!='.');
	getch();
}
