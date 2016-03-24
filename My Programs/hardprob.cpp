/*

PROG: hardprob
LANG: C++                  
*/
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

int main() 
{
    ofstream fout ("hardprob.out");
    ifstream fin ("hardprob.in");
    int a,b;
    cin>>a>>b;
    cout<<pow(float(a),b)<<endl;
    return 0;
}
    
