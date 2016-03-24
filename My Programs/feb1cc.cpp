#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int tes;
    cin>>tes;
    for(int a=1;a<=tes;a++)
    {
            char str1[10000],str2[10000];
            long ct=0;
            cin>>str1>>str2;
            for(int i=0;str2[i]!='\0';i++)
            {
                    for(int j=0;str1[j]!='\0';j++)
                    {
                            if(str1[j]==str2[i])
                            {
                                               ct++;
                                               str1[j]='*';
                                               break;
                            }
                    }
            }
            cout<<ct<<endl;
    }
    //system("pause");
    return 0;
}
