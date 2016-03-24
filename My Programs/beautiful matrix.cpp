#include<iostream>
#include<cmath>
using namespace std;
int main()
{
		int t;
		int a,b;
		for(int i=0;i<5;i++)
		{
				for(int j=0;j<5;j++)
				{
						cin>>t;
						if(t)
						{
								cout<<abs(i-2)+abs(j-2);
								return 0;
						}
				}
		}
		return 0;
}
				
