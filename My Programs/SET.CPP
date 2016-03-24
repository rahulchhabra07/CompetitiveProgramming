#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<stdio.h>






int min(int a,int b)
{
	if(a>b)
	return b;
	else
	return a;
}
int max(int a,int b)
{
	if(a<b)
	return b;
	else
	return a;
}



struct in
{
	char c;
	unsigned long no;
	char ans;
};


struct set
{
	long l;
	long u;
};











set inter(set s1, set s2)
{
	set s;
	if((s1.u<s2.l)||(s1.l>s2.u))
	{
		s.u=s.l=0;
	}
	else
	{
		s.l=max(s1.l,s2.l);
		s.u=min(s1.u,s2.u);
	}
	return s;
}







void main()
{
	clrscr();
	int tes;
	cin>>tes;
	cin.ignore(5,'\n');
	for(int a=1;a<=tes;a++)
	{
		int n;
		cin>>n;
		cin.ignore(5,'\n');
		set *setar=new set[n];
		for(int i=0;i<n;i++)
		{
			in inp;
			inp.c=getchar();
			cin.ignore(5,' ');
			cin>>inp.no;
			cin.ignore(5,' ');
			inp.ans=getchar();
			cin.ignore(5,'\n');
			if(inp.ans=='Y')
			{
				if(inp.c=='>')
				{
					setar[i].l=inp.no+1;
					setar[i].u=pow(10,9);
				}
				if(inp.c=='<')
				{
					setar[i].u=inp.no-1;
					setar[i].l=0;
				}
			}
			if(inp.ans=='N')
			{
				if(inp.c=='<')
				{
					setar[i].l=inp.no;
					setar[i].u=pow(10,9);
				}
				if(inp.c=='>')
				{
					setar[i].l=0;
					setar[i].u=inp.no;
				}
			}
		}
		set setf,temp;
		setf.l=0;
		setf.u=pow(10,9);
		int ct=0;
		for(int j=0;j<n;j++)
		{
			temp=inter(setf,setar[j]);
			if(temp.u==temp.l==0)
			{
				ct++;
			}
			else
			{
				setf=temp;
			}
		}
		cout<<ct<<endl;
	}
	getch();
}

