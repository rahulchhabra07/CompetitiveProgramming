#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream a_file ( "a.txt" );
    for(int i=1;i<=100;i++)
    {
            a_file<<i<<". Thank You..\n";
    }
    return 0;
}
