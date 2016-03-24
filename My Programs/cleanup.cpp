#include<iostream>
using namespace std;











struct array
{
       int r[1000];
};







int main()
{
    int tes,in,inp,ct,job;
    array a,arr;
    for(int i=0;i<1000;i++)
    {
            arr.r[i]=0;
    }
    cin>>tes;
    for(int l=0;l<tes;l++)
    {
            a=arr;
            cin>>job>>in;
            for(int i=0;i<in;i++)
            {
                    cin>>inp;
                    a.r[inp-1]=2;
            }
            ct=0;
            for(int i=0;i<job;i++)
            {
                    if(a.r[i]==0)
                    {
                                 if(!(ct%2))
                                 {
                                            cout<<i+1<<' ';
                                 }
                                 else
                                 {
                                     a.r[i]=1;
                                 }
                                 ct++;
                    }
            }
            cout<<endl;
            for(int i=0;i<job;i++)
            {
                    if(a.r[i]==1)
                    {
                              cout<<i+1<<' ';
                    }
            }
            cout<<endl;
    }
    //system("pause");
    return 0;
}
            
                                           
                              
                    
                    
            
            
