/*
ID: rahulch1
PROG: barn1
LANG: C++                  
*/
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int main() 
{
    ofstream fout ("barn1.out");
    ifstream fin ("barn1.in");
		int m,s,c,t;
		fin>>m>>s>>c;
		if(m>c)
		{
				m=c;
		}
		t=s;
		int ar[c],arr[c-1];
		for(int i=0;i<c;i++)
		{
				fin>>ar[i];
		}
		sort(ar,ar+c);
		s-=ar[0]-1;
		for(int i=1;i<c;i++)
		{
				arr[i-1]=ar[i]-ar[i-1];
		}
		sort(arr,arr+c-1);
		for(int i=c-2;i>c-1-m;i--)
		{
				s-=arr[i]-1;
		}
		s-=t-ar[c-1];
		fout<<s<<endl;
		return 0;
}
				    
