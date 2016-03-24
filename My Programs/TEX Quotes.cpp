#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
			char c;
			bool fl=0;
			while(cin.get(c))
			{
					//c=getchar();
					if(c=='\"')
					{
							if(fl)
							{
									cout<<'\''<<'\'';
							}
							else
							{
									cout<<'`'<<'`';
							}
							fl=!fl;
					}
					else
					{
							putchar(c);
					}
			}
			return 0;
}
