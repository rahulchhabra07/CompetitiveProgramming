#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int res=0;

int valid_numbers(int x,int y,int z,int d){
    
    if(x<0 || y<0 || z<0 || (x==0&&y==0&&z==0))
        return 0;
    
    if(x==0 && y==0 && z==1)
       return 1; 
       
    if(y==0&&z==0&&x==1)
       return 1;
       
    if(z==0&&x==0&&y==1)
       return 1;
       
        
    int S= x+y+z;
		cout<<x<<' '<<y<<' '<<z<<' '<<d<<' '<<res<<endl;
		
    int num=0;
    res+=(valid_numbers(x-1, y, z, d-1)*(4*pow(10,S-d))+
    valid_numbers(x, y-1, z, d-1)*(5*pow(10,S-d))+
    valid_numbers(x, y, z-1, d-1)*(6*pow(10,S-d))) ;
    //cout<< res<<endl;
    num=(valid_numbers(x-1, y, z, d-1)+valid_numbers(x, y-1, z, d-1)+valid_numbers(x, y, z-1, d-1));
    return num;
}

int main() {

    int x,y,z;
    
    cin>>x>>y>>z;
    
    cout<< valid_numbers(1,1,1,3);
    cout<<res;

    return 0;
}
