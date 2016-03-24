/*
ID: rahulch1
PROG: save it
LANG: C++                  
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main() 
{
    ofstream fout ("saveout.txt");
    ifstream fin ("savein.txt");
    int n;
    fin>>n;
    int a;
    long sum=0;
    int ar[]={0,0,0,0,0}; 
		for(int i=0;i<n;i++)
		{
				fin>>a;
				sum+=(a-(a%5));
				ar[a%5]++;
		}
		sum+=(ar[3]+ar[4])*5;
		fout<<sum;
		return 0;
}
				
		
				
				
							
		
