/*
ID: rahulch1
PROG: transform
LANG: C++                  
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;





int code(char a)
{
		if(a=='@')
		{
				return 0;
		}
		if(a=='-')
		{
				return 1;
		}
}


int swap(int &a,int &b)
{
		a=a+b-(b=a);
}



/*

int chk1(int n,int ar[n][n],int arr[n][n])
{
		int fl=1;
		for(int i=0;i<n;i++)
		{
				for(int j=0;j<n,fl;j++)
				{
						fl=(ar[i][j]==arr[j][n-i];
				}
		}
		return fl;
}

*/

/*int chk4(int ar[n][],arr[n][])
{
		int fl=1;
		for(int i=0;i<n;i++)
		{
				for(int j=0;j<n,fl;j++)
				{
						fl=(ar[i][j]==arr[i][n-j];
				}
		}
		return fl;
}


int chk3(int ar[n][],arr[n][])
{
		int fl=1;
		for(int i=0;i<n;i++)
		{
				for(int j=0;j<n,fl;j++)
				{
						fl=(ar[i][j]==arr[n-j][i];
				}
		}
		return fl;
}
		*/
/*
int chk2(int ar[n][],arr[n][])
{
		int fl=1;
		for(int i=0;i<n;i++)
		{
				for(int j=0;j<n,fl;j++)
				{
						fl=(ar[i][j]==arr[n-i][n-j];
				}
		}
		return fl;
}


int chk6(int ar[n][],arr[n][])
{
		int fl=1;
		for(int i=0;i<n;i++)
		{
				for(int j=0;j<n,fl;j++)
				{
						fl=(ar[i][j]==arr[i][j]);
				}
		}
		return fl;
}



*/
















int main() 
{
    ofstream fout ("transform.out");
    ifstream fin ("transform.in");
    int n,fl;
    fin>>n;
    fin.ignore(5,'\n');
    int ar[n][n],arr[n][n];
    char str[n+1];
    for(int i=0;i<n;i++)
    {
				fin.getline(str,n+1);
				for(int j=0;j<n;j++)
				{
						ar[i][j]=code(str[j]);
				}
		}
		for(int i=0;i<n;i++)
    {
				fin.getline(str,n+1);
				for(int j=0;j<n;j++)
				{
						arr[i][j]=code(str[j]);
				}
		}
		
		
		
		
		
		
		
		//------------------CHECK 1--------------------
		
		
		fl=1;
		for(int i=0;(i<n)&&fl;i++)
		{
				for(int j=0;(j<n)&&fl;j++)
				{
						fl=(ar[i][j]==arr[j][n-i-1]);
				}
		}
		if(fl)
		{
				fout<<1<<endl;
				return 0;
		}
		
		
		//---------------------CHECK 2-------------------
		
		fl=1;
		for(int i=0;(i<n)&&fl;i++)
		{
				for(int j=0;(j<n)&&fl;j++)
				{
						fl=(ar[i][j]==arr[n-i-1][n-j-1]);
				}
		}
		if(fl)
		{
				fout<<2<<endl;
				return 0;
		}
		
		
		//----------------------------CHECK 3-------------------
		
		
		fl=1;
		
		for(int i=0;(i<n)&&fl;i++)
		{
				for(int j=0;(j<n)&&fl;j++)
				{
						fl=(ar[i][j]==arr[n-j-1][i]);
				}
		}
		if(fl)
		{
				fout<<3<<endl;
				return 0;
		}
		
		
		//------------------------CHECK 4-------------
		
		
		fl=1;
		for(int i=0;(i<n)&&fl;i++)
		{
				for(int j=0;(j<n)&&fl;j++)
				{
						fl=(ar[i][j]==arr[i][n-j-1]);
				}
		}
		if(fl)
		{
				fout<<4<<endl;
				return 0;
		}
		
		
		
		//-----------------CHECK 6---------------------
		
		int fll=0;
		fl=1;
		for(int i=0;(i<n)&&fl;i++)
		{
				for(int j=0;(j<n)&&fl;j++)
				{
						fl=(ar[i][j]==arr[i][n-j]);
				}
		}
		if(fl)
		{
				fll=1;
		}
		
		
		//------------TRANSFORMATION FOR 5------------------
		
		
		for(int i=0;i<n;i++)
		{
				for(int j=0;j<n/2;j++)
				{	
						swap(ar[i][j],ar[i][n-j-1]);
				}
		}
		
		
		//----------------CHECK 5--------------------------
		
		
		int fll1=1, fll2=1, fll3=1;
		for(int i=0;(i<n)&&fll2;i++)//chk5-1
		{
				for(int j=0;(j<n)&&fll1;j++)
				{
						fll1=(ar[i][j]==arr[j][n-i-1]);
				}
		}
		for(int i=0;(i<n)&&fll2;i++)//chk5-2
		{
				for(int j=0;(j<n)&&fll2;j++)
				{
						fll2=(ar[i][j]==arr[n-i-1][n-j-1]);
				}
		}
		for(int i=0;(i<n)&&fll3;i++)//chk5-3
		{
				for(int j=0;(j<n)&&fll3;j++)
				{
						fll3=(ar[i][j]==arr[n-j-1][i]);
				}
		}
		
		
		if(fll1||fll2||fll3)
		{
				fout<<5<<endl;
				return 0;
		}
		
		
		//------------SHOW 6------------------------
		if(fll)
		{
				fout<<6<<endl;
				return 0;
		}
		
		//------------------END 7---------------------
		fout<<7<<endl;
		return 0;
}
		
		
    
    
