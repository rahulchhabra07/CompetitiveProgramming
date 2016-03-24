/*
ID: rahulch1
PROG: milk3
LANG: C++                  
*/

#include <iostream>
#include <fstream>
#include <string>
#include <set>

using namespace std;



set<int> s;
bool m[21][21][21]={0};
int a,b,c;
struct coord{int a,b,c;};

void mark(coord p)
{
		m[p.a][p.b][p.c]=1;
}

bool visit(coord p)
{
	  return (m[p.a][p.b][p.c]==1);
}


void search(coord p)
{
		if(visit(p))
		{
				return;
		}
		else
		{
				mark(p);
		}
		if(p.a==0)
		{
				s.insert(p.c);
		}
		coord q;
		int x=p.a,y=p.b,z=p.c;
		if(x>0)
		{
				if(y<b)
				{
						if(x<=b-y)
						{
								q.a=0;
								q.b=y+x;
								q.c=z;
								search(q);
						}
						else
						{
								q.a=a+b-y;
								q.b=b;
								q.c=z;
								search(q);
						}
				}
				if(z<c)
				{
						if(x<=c-z)
						{
								q.a=0;
								q.b=y;
								q.c=z+x;
								search(q);
						}
						else
						{
								q.a=a+c-z;
								q.b=y;
								q.c=c;
								search(q);
						}
				}
		}
		if(y>0)
		{
				if(x<a)
				{
						if(y<=a-x)
						{
								q.a=y+x;
								q.b=0;
								q.c=z;
								search(q);
						}
						else
						{
								q.a=a;
								q.b=a+b-x;
								q.c=z;
								search(q);
						}
				}
				if(z<c)
				{
						if(y<=c-z)
						{
								q.a=x;
								q.b=0;
								q.c=z+y;
								search(q);
						}
						else
						{
								q.a=x;
								q.b=b+c-z;
								q.c=c;
								search(q);
						}
				}
		}
		if(z>0)
		{
				if(y<b)
				{
						if(z<=b-y)
						{
								q.a=x;
								q.b=y+z;
								q.c=0;
								search(q);
						}
						else
						{
								q.a=x;
								q.b=b;
								q.c=a+b-y;
								search(q);
						}
				}
				if(y<b)
				{
						if(z<=b-y)
						{
								q.a=z+x;
								q.b=y;
								q.c=0;
								search(q);
						}
						else
						{
								q.a=a;
								q.b=y;
								q.c=a+c-x;
								search(q);
						}
				}
		}
		
}
				
						
								

using namespace std;
int main() 
{
    ofstream fout ("milk3.out");
    ifstream fin ("milk3.in");
    fin>>a>>b>>c;
    //bool m[a+1][b+1][c+1];
    m[0][0][c]=1;
    coord p={0,0,c};
    search(p);
    for(set<int>::iterator it=s.begin();it!=s.end();it++)
    {
    		fout<<*it<<'\n';
    		cout<<*it<<'\n';
    }
    return 0;
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    					

