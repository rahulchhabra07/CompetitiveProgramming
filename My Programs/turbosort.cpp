#include<iostream>
using namespace std;

void swap(int &a,int &b)
{
     int temp;
     temp=a;
     a=b;
     b=temp;
}

int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
                          cin>>ar[i]
    }
    for(int i=0;i<n;i++)
    {
                        for(int j=0;j<n;j++)
                        {
                                if(ar[i]<ar[j])
                                {
                                               swap(ar[i],ar[j]);
                                }
                        }
                        cout<<ar[i]<<endl;
    }
    return 0;
}
