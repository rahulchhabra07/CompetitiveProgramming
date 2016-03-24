#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int ct1=0,ct2=0,ct3=0;
    char str[101];
    gets(str);
    for(int i=0;str[i]!='\0';i++)
    {
            switch(str[i])
            {
                          case '1':
                               ct1++;
                               break;
                          case '2':
                               ct2++;
                               break;
                          case '3':
                               ct3++;
                               break;
            }
    }
    //for(int i=0;i<(ct1+ct2+ct3);i++)
    {
            for(int j=0;j<ct1-1;j++)
            {
                    cout<<1<<'+';
            }
            if(ct1)cout<<1;
            if(ct1&&ct2)
            {
                   cout<<'+';
            }
            for(int j=0;j<ct2-1;j++)
            {
                    cout<<2<<'+';
            }
            if(ct2)cout<<2;
            if((ct1||ct2)&&ct3)
            {
                               cout<<'+';
            }
            for(int j=0;j<ct3-1;j++)
            {
                    cout<<3<<'+';
            }
            if(ct3)cout<<3;
    }
    //system("pause");
    return 0;
}
    
