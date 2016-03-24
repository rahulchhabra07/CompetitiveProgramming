#include<iostream>
#include<cmath>
using namespace std;

int chkprim(long long n)
{
                 for(long i=3;i<sqrt(n);i+=2)
                 {
                         if(!(n%i))
                         {
                                   return 0;
                         }
                 }
                 return 1;
}

                         
int main()
{
           for(int i=11;i<100;i++)
           {
                    if(!(600851475143%i))
                    {
                                         cout<<i;
                    
                                       /* if(chkprim(i))
                                        {
                                                        cout<<i<<endl;               
                                        }    */
                    }
           system("pause");
           return 0;
}
