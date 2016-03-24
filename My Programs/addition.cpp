/*
ID: rahulch1
PROG: addin
LANG: C++                  
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main() 
{
    ofstream fout ("addout.txt");
    ifstream fin ("addin.txt");
    long long a,b;
    fin>>a>>b;
    fout<<a+b;
    return 0;
}
    					
