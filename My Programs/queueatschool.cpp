#include<iostream>
#include<stdio.h>
using namespace std;


void swap(char &a,char &b)
{
     char temp;
     temp=a;
     a=b;
     b=temp;
}




int main()
{
    int n, t;
    cin>>n>>t;
    char str[n];
    cin.ignore(5,'\n');
    gets(str);
    for(int i=0;i<t;i++)
    {
            for(int i=0;str[i]!='\0';i++)
            {
                    if(str[i]=='B'&&str[i+1]=='G')
                    {
                                                  swap(str[i],str[i+1]);
                                                  i++;
                    }
            }
    }
    puts(str);
    //system("pause");
    return 0;
}
            
