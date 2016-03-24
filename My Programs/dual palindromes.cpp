/*
ID: rahulch1
PROG: dualpal
LANG: C++                  
*/
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;


ofstream fout ("dualpal.out");
ifstream fin ("dualpal.in");


void swap(char &a,char &b)
{
		a=a+b-(b=a);
}




int pal(int s,int n)
{
		char ar[50];
		int j=0;
		while(s)
		{
				ar[j]=s%n;
				s/=n;
				j++;
		}
		ar[j]='\0';
		int fl=1;
		//j=strlen(ar);
		//fout<<"\nlength : \t"<<j<<endl;
		for(int i=0;i<=j/2&&fl;i++)
		{
				fl=(ar[i]==ar[j-1-i]);//fout<<'\n'<<i<<'\t'<<fl<<endl;
		}
		return fl;
		
}
		
				 


int pal2(int s)
{
		int ct=0;
		for(int i=2;i<=10;i++)
		{
				if(pal(s,i))
				{
						ct++;
						//fout<<i<<endl;
				}
				if(ct==2)
				{
						return 1;
				}
		}
		return 0;
}


int main()
{
		//ofstream fout ("dualpal.out");
    //ifstream fin ("dualpal.in");
		int n,s;
		fin>>n>>s;
		while(n)
		{
				s++;
				if(pal2(s))
				{
						fout<<s<<endl;
						n--;
				}
				
		}
		//system("pause");
}
				
		
