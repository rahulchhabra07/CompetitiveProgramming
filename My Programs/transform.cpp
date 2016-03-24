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


int swap(int a,int b)
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
		for(int i=0;i<n&&fl;i++)
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
		
		
		//---------------------chk2-------------------
		
		for(int i=0;i<n;i++)
		{
				for(int j=0;j<n,fl;j++)
				{
						fl=(ar[i][j]==arr[n-i][n-j]);
				}
		}
		if(fl)
		{
				fout<<2<<endl;
				return 0;
		}
		
		
		
		
		for(int i=0;i<n;i++)//chk3
		{
				for(int j=0;j<n,fl;j++)
				{
						fl=(ar[i][j]==arr[n-j][i]);
				}
		}
		if(fl)
		{
				fout<<3<<endl;
				return 0;
		}
		
		
		
		for(int i=0;i<n;i++)//chk4
		{
				for(int j=0;j<n,fl;j++)
				{
						fl=(ar[i][j]==arr[i][n-j]);
				}
		}
		if(fl)
		{
				fout<<4<<endl;
				return 0;
		}
		int fll=0;
		for(int i=0;i<n;i++)//chk4
		{
				for(int j=0;j<n,fl;j++)
				{
						fl=(ar[i][j]==arr[i][n-j]);
				}
		}
		if(fl)
		{
				fll=1;
		}
		for(int i=0;i<n;i++)
		{
				for(int j=0;j<n;j++)
				{	
						swap(ar[i][j],arr[i][n-j]);
				}
		}
		int fll1, fll2, fll3;
		for(int i=0;i<n;i++)//chk51
		{
				for(int j=0;j<n,fl;j++)
				{
						fll1=(ar[i][j]==arr[j][n-i]);
				}
		}
		for(int i=0;i<n;i++)//chk52
		{
				for(int j=0;j<n,fl;j++)
				{
						fll1=(ar[i][j]==arr[n-i][n-j]);
				}
		}
		for(int i=0;i<n;i++)//chk53
		{
				for(int j=0;j<n,fl;j++)
				{
						fll1=(ar[i][j]==arr[n-j][i]);
				}
		}
		
		if(fll1||fll2||fll3)
		{
				fout<<5<<endl;
				return 0;
		}
		if(fll)
		{
				fout<<6<<endl;
				return 0;
		}
		fout<<7<<endl;
		return 0;
}
		
		
    
    
