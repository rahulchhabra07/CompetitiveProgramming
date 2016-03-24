
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream fout ("test.out");
    ifstream fin ("test.in");
    
    int tes;
    fin>>tes;
    for(int u=1;u<=tes;u++)
    {
            fout<<"Case #"<<u<<": ";
            int n,l,ct=0,fl=1;
            fin>>n>>l;
            char a1[n][l+1],a2[n][l+1],c1[n],c2[n];
            for(int i=0;i<n;i++)
            {
                    fin>>a1[i];
                   /* for(int i=0;i<=l;i++)
                    {
                            fout<<int(a1[n][i])<<endl;
                    }*/
            }
            for(int i=0;i<n;i++)
            {
                    fin>>a2[i];
                    //fout<<a2[n]<<endl;
            } 
            for(int i=0;(i<=l&&fl);i++)
            {
                    int c1[i]=0,c2[i]=0;
                    for(int j=0;j<n;j++)
                    {
                            if(int(a1[j][i])==48)
                            {
                                            c1[j]++;
                            }
                            if(int(a2[j][i])==48)
                            {
                                            c2[j]++;
                            }
                    }
                    //fout<<endl<<endl<<c1<<endl<<c2<<endl<<endl;
                    if(c1[j]==c2[j])
                    {
                              int p;
                              p=j;
                              do
                              {
                                  if(c1[p+1]!=c2[p+1])
                                  {
                                                      
                                  }
                                  p++;
                              }
                              while(p<=l&&c1[p+1]==c2[p+1]);
                    }
                    if(c1[j]!=c2[j]&&c1[j]+c2[j]==n)
                    {
                                ct++;
                    }
                    if((c1[j]!=c2[j])&&(c1[j]+c2[j]!=n))
                    {
                                            fout<<"NOT POSSIBLE\n";
                                            fl=0;
                    }
            }
            if(fl)
            {
                  fout<<ct<<endl;
            }
    }
    //system("pause");
    return 0;
}
