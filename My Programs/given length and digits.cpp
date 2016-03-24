#include<bits/stdc++.h>
using namespace std;

void max(int s,int m)
{
		if(m==1)
		{
				cout<<s;
		}
		else
		{
				if(s>9)
				{
						cout<<9;
						s-=9;
				}
				else
				{
						cout<<s;
						s=0;
				}
				max(s,m-1);
		}
}

void min(int s, int m)
{
		if(m==1)
		{
				cout<<s;
		}
		else
		{
				if((m-1)*9<=s-1)
				{
						cout<<s;
						s--;
				}
				else
				{
						cout<<(m-1)*9-(s-1);
				}
		}
}
				
int main()
{
		int s,m;
		cin>>m>>s;
		if(s>9*m)
		{
				cout<<-1;
		}
		else
		{
				max(s,m);
		}
		cout<<' ';
		if(s<1)
		{
				cout<<-1;
		}
		else
		{	
				min(s,m);
		}
		cout<<'\n';
		return 0;
}

