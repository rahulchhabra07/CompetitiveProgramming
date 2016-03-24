#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;



int pal(char ar[])
{
    long l,fl=1;
    l=strlen(ar);
    for(int i=0;i<l/2;i++)
    {
            if(ar[i]!=ar[l-i])
            {
                              return 0;
            }
    }
    return 1;
}

void ad(char ar[])
{
     long l;
     l--;
     l=strlen(ar);
     label:
           if(ar[l]<57&&ar[l]>=48)
           {
                       ar[l]++;
           }
           if(ar[l]<48||ar[l]>57)
           {
                       l=strlen(ar);
                       for(int i=l;i>=0;i--)
                       {
                               ar[i]=ar[i-1];
                       }
                       ar[0]=49;
                       ar[l+1]='\0';
           }
           if(ar[l]==57)
           {
                        ar[l]=48;
                        l--;
                        goto label;
           }
}
           
     
    
    



int main()
{
    int tes;
    cin>>tes;
    cin.ignore(5,'\n');
    for(int u=1;u<=tes;u++)
    {
            char ar[1000000];
            gets(ar);
            while(!pal(ar))
            {
                           ad(ar);
            }
            puts(ar);
    }
    return 0;
}
