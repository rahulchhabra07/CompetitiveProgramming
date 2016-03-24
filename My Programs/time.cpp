#include <time.h>
#include <stdio.h>
#include<iostream>
using namespace std;
 
int main(void)
{
   time_t ltime;

   time(&ltime); 

   char tim[25];
   tim=ctime(&ltime));
   puts(tim);
   system("pause");
}
