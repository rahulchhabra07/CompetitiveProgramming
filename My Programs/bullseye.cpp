#include<iostream>
#include<fstream>
using namespace std;
int main()
{
     ofstream fout ("test.out");
    ifstream fin ("test.in");
    int tes;
    fin>>tes;
    for(int u=1;u<=tes;u++)
    {
            int t,r,a=0;
            fin>>r>>t;
            do
            {
                      t-=(2*r+1);
                      r+=2;
                      a++;
            }
            while(t>=(2*r+1));
            fout<<"Case #"<<u<<": "<<a<<endl;
    }
    return 0;
}
    
                      
            
