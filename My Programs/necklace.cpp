/*
ID: rahulch1
PROG: beads
LANG: C++                  
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() 
{
    ofstream fout ("beads.out");
    ifstream fin ("beads.in");
    int n,ct=0,fl,max=0;
    fin>>n;
    fin.ignore(5,'\n');
    char str[n+1];
    int ar[n];
    fin.getline(str,n+1);
    for(int i=0;i<n;i++)
    {
				switch(str[i])
				{
						case 'r':
								ar[i]=1;
								break;
						case 'b':
								ar[i]=2;
								break;
						case 'w':
								ar[i]=0;
								break;
				}
		}
		for(int i=0;i<n;i++)
		{
				if((ar[i]==1)||(ar[i]==2))
				{
						fl=3-ar[i];
						break;
				}
		}
		if((fl!=1)&&(fl!=2))
		{
				fout<<n<<endl;
				return 0;
		}
		for(int i=0;i<n;i++)
		{
				if(ar[i]==fl)
				{
						ct++;
						break;
				}
		}
		if(!ct)
		{
				fout<<n<<endl;
				return 0;
		}
		for(int i=0;i<n;i++)
		{
				fout<<ar[i]<<endl;
		}
		for(int i=0;i<n;i++)
		{
				int j=0,k,flr=0,fll=0,ctr=0,ctl=0;
				do				//counting right
				{
						j++;
						k=(i+j)%n;
						if(!flr)
						{
								flr=ar[k];
						}
						ctr++;
				}
				while((ar[(k+1)%n]+flr)!=3);
				j=0;
				do				//counting left
				{
						j++;
						k=(i-j)%n;
						if(!fll)
						{
								fll=ar[k];
						}
						ctl++;
				}
				while((ar[(k-1)%n]+fll)!=3);
				fout<<ctr<<'\t'<<ctl<<endl;
				if(ctr+ctl>max)
				{
						max=ctr+ctl;
				}
		}
		fout<<max<<endl;
		return 0;
}
