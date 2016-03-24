/*

PROG: easyprob
LANG: C++                  
*/
#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main() 
{
    ofstream fout ("easyprob.out");
    ifstream fin ("easyprob.in");
    long n;
    fin>>n;
    int ar[n];
    int ct=0;
    for(int i=0;i<n;i++)
    {
				fin>>ar[i];
				ct+=ar[i];
		}
		fout<<ct<<endl;
		return 0;
}
    
