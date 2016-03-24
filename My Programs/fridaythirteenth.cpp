/*
ID: rahulch1
PROG: friday
LANG: C++                  
*/
#include<iostream>
#include<fstream>
using namespace std;



int day(int m,int y)
{
		switch(m)
		{
				case 1:  case 3:  case 5:  case 7:  case 8:  case 10:  case 12:
					 return 3;
				case 4:  case 6:  case 9:  case 11:
						return 2;
				case 2:
						return ((!(y%100))&&(!(y%400)))||((y%100)&&(!(y%4)));
		}
}



int main()
{
		ofstream fout ("friday.out");
    ifstream fin ("friday.in");
		int m=12,y=1899,n,ar[7],ct=4;
		for(int i=0;i<7;i++)
		{
				ar[i]=0;
		}
		fin>>n;
		while((y<1900+n-1)||(m<12))
		{
				ct+=day(m,y);
				ct%=7;
				ar[ct]++;
				m++;
				if(m==13)
				{
						y++;
						m=1;
				}
		}
		for(int i=0;i<7;i++)
		{
				fout<<ar[i];
				if(i<6)
				{
						fout<<' ';
				}
		}
		fout<<endl;
		
		//fout<<endl;
		//system("pause");
		return 0;
}
