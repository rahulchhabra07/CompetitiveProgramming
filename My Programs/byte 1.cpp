#include<iostream>
#include<fstream>
using namespace std;
long long mv(long long n)
{
    if(n<12)
    {
        return n;
    }
    long long a;
    a=(mv(n/2)+mv(n/3)+mv(n/4));
    if(a>n)
    {
        return a;
    }
    else
    {
        return n;
    }       
}


int main()
{

    ofstream fout ("a.txt");
    for(int n=1;n<=100;n++)
    {
                     if(mv(n)-n==17)
                     {
                                 fout<<"case "<<n<<":  ";
                     }
    }
         
    return 0;
}
                     
