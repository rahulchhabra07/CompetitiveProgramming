/*
ID: rahulch1
PROG: milk2
LANG: C++                  
*/
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;



int p=0;
struct m
{
		int a,b;
};



bool operator<(const m& x, const m& y)
{
		return x.a < y.a;
}



int whenstop(int i, m ar[],int n)
{
		if(i==n)
		{
				return i;
		}
		int max, j=i;
		max=ar[i].b;
		for(i;i<n;i++)
		{
				if((ar[i+1].a<ar[i].b)&&(ar[i+1].b>max))
				{	
						max=ar[i+1].b;
						j=i+1;
						p=i;
				}
				
		}
		return j;
}

			
			
		

int main() 
{
    ofstream fout ("milk2.out");
    ifstream fin ("milk2.in");
    int n;
    fin>>n;
    m ar[n];
    for(int i=0;i<n;i++)
    {
				fin>>ar[i].a>>ar[i].b;
		}
		
		std::sort(ar,ar+n);
		/*	for(int i=0;i<n;i++)
		{
				fout<<ar[i].a<<'\t'<<ar[i].b<<'\n';
		}*/
		int start=0, stop=0, maxcon=0, maxidl=0;
		int i=0;
		stop=ar[i].a;
		while(i<n)
		{	
				fout<<i<<"\tapple"<<endl;
				start =ar[i].a;
				if((start-stop)>maxidl)
				{	
						maxidl=start-stop;
					  fout<<"maxidl\t"<<maxidl<<"\t"<<i<<endl;
				}
				i=whenstop(i,ar,n);
				fout<<i<<"\tberry"<<endl;
				stop=ar[i].b;
				if((stop-start)>maxcon)
				{
						maxcon=stop-start;
				}
				if(p>i)
				{
						i=p;
				}
				i++;
				fout<<i<<"\torange"<<endl;
		}
		fout<<maxcon<<' '<<maxidl<<'\n';
		
		
		return 0;
}
			
		
				
    
