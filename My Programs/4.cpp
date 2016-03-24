#include<stdio.h>
#include<iostream>
using namespace std;
main(){
int i,j,count=0;
for(i=0;i<5;i++){
for(j=0;j<5;j++){
if(i==j || (i+j)%4==0)
count++;
}
}
printf("%d",count);
system("pause");
}
