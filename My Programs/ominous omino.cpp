#include<iostream>
#include<fstream>
#include<cmath>

using namespace std;
int main()
{
		ofstream fout ("sub1.out");
    ifstream fin ("sub1.in");
		int tes;
		fin>>tes;
		for(int u=0;u<tes;u++)
		{
				fout<<"Case #"<<u+1<<": ";
				int x,r,c;
				fin>>x>>r>>c;
				int ct=0;
				if(r*c%x==0 && min(r,c)>=ceil(x/2) && max(r,c)>=x)
				{
						ct=1;
				}
				if(x>=7)
				{
						ct=0;
				}
				if(ct)
					fout<<"GABRIEL\n";
				else
					fout<<"RICHARD\n";
		}
		return 0;
}
				
				
				
				
