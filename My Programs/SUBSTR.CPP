#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	clrscr();
	char str[80],substr[20];
	int flag=0;
	gets(str);
	gets(substr);
	for(int i=0;str[i]!='\0';i++)
	{
		for(int j=0;substr[j]!='\0',str[i+j]==substr[j];j++)
		{
			if(substr[j+1]=='\0')
			{
				cout<<"found at "<<i+1<<endl;
				flag=1;
			}
		}
	}
	if(!flag)
	{
		cout<<"not found";
	}
	getch();
}