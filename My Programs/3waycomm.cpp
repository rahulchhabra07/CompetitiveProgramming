#include<iostream>
#include<cmath>
using namespace std;

struct d
{
		int x,y;
};

double di(d d1,d d2)
{
		return sqrt(((d1.x-d2.x)*(d1.x-d2.x))+((d1.y-d2.y)*(d1.y-d2.y)));
}

int main()
{
    int tes;
		double r;
    d d1,d2,d3;
    cin>>tes;
    for(int u=0;u<tes;u++)
    {
    		cin>>r;        
        cin>>d1.x>>d1.y;
				cin>>d2.x>>d2.y;
				cin>>d3.x>>d3.y;
        {
        		if((di(d1,d2)<=r)+(di(d2,d3)<=r)+(di(d1,d3)<=r)>=2)
            {
            		cout<<"yes"<<endl;
            }
            else
            {
            		cout<<"no"<<endl;
            }
				}
		}
    return 0;
}
    
