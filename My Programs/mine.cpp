#include <iostream>
#include <fstream>


using namespace std;



int max(int a,int b)
{
    if(a>b)
    {
           return a;
    }
    return b;
}

int min(int a,int b)
{
    if(a<b)
    {
           return a;
    }
    return b;
}

     

int main() {
    ofstream fout ("test.out");
    ifstream fin ("test.in");
    int tes;
    fin>>tes;
    for(int u=1;u<=tes;u++)
    {
            fout<<"Case #"<<u<<":\n";
            int r,c,m,e,l,x;
            fin>>r>>c>>m;
            int ar[r][c];
            ar[0][0]=100;
            e=r*c-m;
            l=min(r,c);
            if(l<3)
            {
                   x=l;
            }
            if(l>=3)
            {
                   x=e%l;
                   }{
                   if(e%l==1||e%l==2)
                   {
                                 
                                 
                                                 if(c>e/x)
                                                 {
                                                          for(int i=0;i<r;i++)
                                                          {
                                                                 for(int j=0;j<c;j++)
                                                                 {
                                                                               ar[i][j]=2;
                                                                 }
                                                          }
                                                          for(int i=0;i<e/x;i++)
                                                          {
                                                                  for(int j=0;j<x;j++)
                                                                  {
                                                                          ar[i][j]=0;
                                                                  }
                                                          }
                                                          ar[0][0]=1;
                                                 }
                                                 else
                                                 {
                                                     if(r>e/x)
                                                     {
                                                              for(int i=0;i<r;i++)
                                                              {
                                                                 for(int j=0;j<c;j++)
                                                                 {
                                                                               ar[i][j]=2;
                                                                 }
                                                              }
                                                              for(int i=0;i<e/x;i++)
                                                               {
                                                                       for(int j=0;j<x;j++)
                                                                       {
                                                                               ar[j][i]=0;
                                                                       }
                                                               }
                                                          ar[0][0]=1;
                                                     }
                                                 }
                                 
                   
                   if(e%l>=3||e%l==0)
                   {
                           for(int i=0;i<r;i++)
                           {
                                       for(int j=0;j<c;j++)
                                       {
                                                     ar[i][j]=2;
                                       }
                           }
                           if(r<c)
                           {
                                  for(int i=0;i<e/r;i++)
                                  {
                                          for(int j=0;j<x;j++)
                                          {
                                                  ar[i][j]=0;
                                          }
                                  }
                                  for(int j=0;j<x;j++)
                                  {
                                          ar[j][e/r]=0;
                                  }
                                  ar[0][0]=1;
                           }
                           else
                           {
                                for(int i=0;i<e/c;i++)
                                  {
                                          for(int j=0;j<x;j++)
                                          {
                                                  ar[j][i]=0;
                                          }
                                  }
                                  for(int j=0;j<x;j++)
                                  {
                                          ar[e/c][j]=0;
                                  }
                                  ar[0][0]=1;
                           }
                   }
                   }   
            }
                               
            if(ar[0][0]==100||(e==2&&l>=2))
            {
                             fout<<"Impossible\n";
            }
            else
            {
                for(int i=0;i<r;i++)
                {
                        for(int j=0;j<c;j++)
                        {
                                switch(ar[i][j])
                                {
                                                case 0:
                                                     fout<<'.';
                                                     break;
                                                case 1:
                                                     fout<<'c';
                                                     break;
                                                case 2:
                                                     fout<<'*';
                                                     break;
                                }
                        }
                        fout<<endl;
                }
            }
    }
    return 0;
}
