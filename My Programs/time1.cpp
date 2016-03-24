#include<ctime>
#include<iostream>
#include<fstream>
#include<iomanip>
#include<unistd.h>
#include<windows.h>
using namespace std;


long se(int h,int m,int s)
{
     long total;
     total=h*3600+m*60+s;
     return total;
}



void wait(int sec)
{
        clock_t endwait;
        endwait = clock() + sec * CLK_TCK;
        while (clock() < endwait) {}
}

int main()
{
    const int MAXLEN = 80;
    char s[MAXLEN];
    time_t t = time(0);
    strftime(s, MAXLEN, "%m/%d/%Y %H:%M:%S", localtime(&t));
    //std::cout << s << '\n';
    int d=0,m=0,h=0,min=0,sec=0;
    m=(int(s[0])-48)*10+(int(s[1])-48);
    d=(int(s[3])-48)*10+(int(s[4])-48);
    h=(int(s[11])-48)*10+(int(s[12])-48);
    min=(int(s[14])-48)*10+(int(s[15])-48);
    sec=(int(s[17])-48)*10+(int(s[18])-48); 
    //cout<<m<<endl<<d<<endl<<h<<endl<<min<<endl<<sec;   
    
               
    if(d==11&&m==3)
    {
                   long total,left;
                   total=se(h,min,sec);
                   left=86400-total;
                   ofstream a_file ( "a.txt" ,ios::trunc);
                   int i;
                   for(i=1;i<=total;i++)
                   {
                                 a_file<<i<<". Happy Birthday To You Chahat!!\n";
                                 cout<<i<<". Happy Birthday To You Chahat!!\n";
                   }
                   i++;
                   while(left)
                   {
                                 wait(1);
                                 a_file<<i<<". Happy Birthday To You Chahat!!\n";
                                 cout<<i<<". Happy Birthday To You Chahat!!\n";
                                 i++;
                                 left--;
                   }
    }
    //system("pause");
    return 0;
}
