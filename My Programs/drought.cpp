/*
ID: rahulch1
PROG: drought
LANG: C++                  
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main() 
{
    ofstream fout ("rainout.txt");
    ifstream fin ("rainin.txt");
    int n;
    fin>>n;
    long long c;
    fin>>c;
    int ct=0;
    while(c>0)
    {
				long a;
				fin>>a;
				c-=a;
				ct++;
		}
		fout<<ct;
		return 0;
}
					
