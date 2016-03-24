/*
ID: rahulch1
PROG: ride
LANG: C++                  (<-- or C++11f you prefer)
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream fout ("test.out");
    ifstream fin ("test.in");
    int ct1=0,ct2=0;
    char s1[7],s2[7];
    fgets(s1);
    fgets(s2);
    for(int i=0;s1[i]!='\0';i++)
    {
            ct1+=int(s1[i]-48);
    }
    for(int i=0;s2[i]!='\0';i++)
    {
            ct2+=int(s2[i]-48);
    }
    if(ct1%47==ct2%47)
    {
                      fout<<"GO";
                      return 0;
    }
    fout<<"STAY";  
    return 0;
}
