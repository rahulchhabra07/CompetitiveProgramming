#include<fstream>
using namespace std;
int main()
{
          ifstream infile("grid.txt");
          int num[20][20];
          for(int i=0;i<20;i++)
          {
                  for(int j=0;j<20;j++)
                  {
                          fin>>num[i][j];
                  }
          }
          int sum=0,ct;
          for(int i=0;i<20;i++)
          {
                  ct=0;
                  for(int j=0;j<20;j++)
                  {
                          ct+=num[i][j];
                  }
                  if(ct>sum)
                  {
                            sum=ct;
                  }
          }
          for(int j=0;j<20;j++)
          {
                  ct=0;
                  for(int i=0;i<20;i++)
                  {
                          ct+=num[i][j];
                  }
                  if(ct>sum)
                  {
                            sum=ct;
                  }
          }
          /*for(int i=0;i<20;i++)
          {
                  for(int k=0;   */
          cout<<ct;
          system("pause");
          return 0;
}
