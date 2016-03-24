#include<iostream>
using namespace std;


int rs(int arr[4][4],int i)
{
    int s=0;
    for(int j=0;j<4;j++)
    {
            s+=arr[i][j];
    }
}

int cs(int arr[4][4],int j)
{
    int s=0;
    for(int i=0;i<4;i++)
    {
            s+=arr[i][j];
    }
}

        




int main()
{
    int tes;
    cin>>tes;
    for(int a=0;a<tes;a++)
    {
            cout<<"Case #"<<a+1<<": ";
            char ar[4][4];
            int arr[4][4],d1=0,d2=0,dr=1;
            for(int i=0;i<4;i++)
            {
                                for(int j=0;j<4;j++)
                                {
                                                    cin>>ar[i][j];
                                }
            }            
            for(int i=0;i<4;i++)
            {
                    for(int j=0;j<4;j++)
                    {
                                        switch(ar[i][j])
                                        {
                                                        case 'X':
                                                             arr[i][j]=5;
                                                             break;
                                                        case 'O':
                                                             arr[i][j]=1;
                                                             break;
                                                        case 'T':
                                                             arr[i][j]=100;
                                                             break;
                                                        case '.':
                                                             arr[i][j]=0;
                                                             break;
                                        }
                    }
            }
            for(int x=0;x<4;x++)
            {
                    int y,z;
                    y=rs(arr,x);
                    z=cs(arr,x);
                    if(y==20||z==20||y==115||z==115)
                    {
                                                    cout<<"X won\n";
                                                    goto label;
                    }
                    if(y==4||z==4||y==103||z==103)
                    {
                                                 cout<<"O won\n";
                                                 goto label;
                    }           
            }
            
            for(int i=0;i<4;i++)
            {
                                for(int j=0;j<4;j++)
                                {
                                                    if(i==j)
                                                    {
                                                            d1+=arr[i][j];
                                                    }
                                                    if(i+j==3)
                                                    {
                                                              d2+=arr[i][j];
                                                    }
                                }
            }
            if(d1==20||d2==115)
            {
                                                    cout<<"X won\n";
                                                    goto label;
            }
            if(d2==4||d2==103)
            {
                                                 cout<<"O won\n";
                                                 goto label;
            } 
            for(int i=0;i<4;i++)
            {
                    for(int j=0;j<4;j++)
                    {
                            if(!arr[i][j])
                            {
                                          dr=0;
                                          break;
                            }
                    }
            }
            if(dr)
            {
                  cout<<"Draw\n";
                  goto label;
            }
            if(!dr)
            {
                  cout<<"Game has not completed\n";
                  goto label;
            }
            label:;
    }
    return 0;
}
            
                   
            
                        
                                                                     
                              
