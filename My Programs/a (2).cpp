#include <iostream>
#include <fstream>
//#include <string>

using namespace std;









int cancel(float ar[],int n)
{
    int j;
    for(int i=0;i<n;i++)
    {
            if(!ar[i])
            {
                      for(int j=i;j<n;j++)
                      {
                              ar[j]=ar[j+1];
                      }
            }
    }
}


















int Partition(float a[], int beg, int end)          //Function to Find Pivot Point
{
    int p=beg,  loc;
    float pivot=a[beg];

    for(loc=beg+1;loc<=end;loc++)
    {
                 if(pivot>a[loc])
                 {
                                 a[p]=a[loc];
                                 a[loc]=a[p+1];
                                 a[p+1]=pivot;

                                 p=p+1;
                 }
     }
     return p;
}


void QuickSort(float a[], int beg, int end)
{
     if(beg<end)
     {
                int p=Partition(a,beg,end);                       //Calling Procedure to Find Pivot

                QuickSort(a,beg,p-1);                             //Calls Itself (Recursion)
                QuickSort(a,p+1,end);			              //Calls Itself (Recursion)
     }
}












    

int main() {
    ofstream fout ("test.out");
    ifstream fin ("test.in");
    int tes;
    fin>>tes;
    for(int u=1;u<=tes;u++)
    {
            int n,t,p1=0,p2=0;
            float a[t],b[t],c[t],d[t];
            
            fin>>t;
            n=t;
            for(int i=0;i<t;i++)
            {
                    fin>>a[i];
                    c[i]=a[i];
            }
            for(int i=0;i<t;i++)
            {
                    fin>>b[i];
                    d[i]=b[i];
            }
            
            int beg,end;        //sorting
            beg=1;
            end=n;
            QuickSort(a,beg,end);
            QuickSort(b,beg,end);
            QuickSort(c,beg,end);
            QuickSort(d,beg,end);
            while(t)
            {
                        if(a[t-1]>b[t-1])
                        {
                                     a[t-1]=b[0]=0;
                                     cancel(a,t);
                                     cancel(b,t);  
                                     t--;
                                     p1++;
                        }
                        else
                        {
                                     a[t-1]=b[t-1]=0;
                                     cancel(a,t);
                                     cancel(b,t);  
                                     t--;
                        }
            }
            while(n)
            {
                        int flag=1;
                        for(int i=n-1;i>=0;i--)
                        {
                                if(d[i]<c[0]&&flag)
                                {
                                             d[i]=c[0]=0;
                                             cancel(d,n);
                                             cancel(c,n);
                                             n--;
                                             p2++;
                                             flag=0;
                                }
                        }
                        if(flag)
                        {
                                c[0]=d[n-1]=0;
                                cancel(d,n);
                                cancel(c,n);
                                n--;
                        }
            }
                                
            fout<<"Case #"<<u<<": "<<p2<<' '<<p1<<endl;
    }                        
            
    return 0;
}
