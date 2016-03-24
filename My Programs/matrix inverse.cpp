#include<iostream>
using namespace std;





int co(int ar[3][3], int m, int n)
{
    int a[4],ct=0,cof;
    for(int i=0;i<3;i++)
    {
            for(int j=0;j<3;j++)
            {
                    if(i!=m&&j!=n)
                    {
                                  ar[i][j]=a[ct];
                                  ct++;
                    }
            }
    }
    cof=a[0]*a[2]-a[1]*a[3];
    return cof;
}


                                  
                                  



int main()
{
    int ar[3][3],cof[3][3],inv[3][3],det;
    for(int i=0;i<3;i++)
    {
            for(int j=0;j<3;j++)
            {
                    cin>>ar[i][j];
            }
    }
    for(int i=0;i<3;i++)
    {
            for(int j=0;j<3;j++)
            {
                    cof[i][j]=co(ar,i,j);
            }
    }
    for(int i=0;i<3;i++)
    {
            for(int j=0;j<3;j++)
            {
                    inv[i][j]=cof[j][i];
            }
    }
    det=ar[0][0]*cof[0][0]-ar[0][1]*cof[0][1]+ar[0][2]*cof[0][2];
    for(int i=0;i<3;i++)
    {
            for(int j=0;j<3;j++)
            {
                    inv[i][j]/=det;
            }
    }
    for(int i=0;i<3;i++)
    {
            for(int j=0;j<3;j++)
            {
                    cout<<inv[i][j]<<'\t';
            }
            cout<<'\n';
    }
    system("pause");
    return 0;
}
    
    
    
    
    
