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




struct m
{
		int a,b;
};



bool operator<(const m& x, const m& y)
{
		return x.a < y.a;
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
		int start=0, stop=0, maxcon=0, maxidl=0;		
		start=ar[0].a;
		stop=ar[0].b;
		maxcon=stop-start;
		for(int i=1;i<n;i++)
		{	
				//fout<<i<<"\t\t";
				if(ar[i].a<=stop)
				{
						if(ar[i].b>stop)
						{
								stop=ar[i].b;
						}
				}
				if(ar[i].a>stop)
				{
						if(maxcon<stop-start)
						{
								maxcon=stop-start;
						}
						start=ar[i].a;
						if(maxidl<start-stop)
						{
								maxidl=start-stop;
						}
						stop=ar[i].b;
				}
				//fout<<start<<'\t'<<stop<<endl;
		}
		fout<<maxcon<<' '<<maxidl<<'\n';
		return 0;
}
			
		
				
    
