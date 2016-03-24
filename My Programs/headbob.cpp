#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
		int tes;
		cin>>tes;
		for(int u=0;u<tes;u++)
		{
				int n,fl=1;
				cin>>n;
				cin.ignore(5,'\n');
				for(int i=0;i<n;i++)
				{
						char c;
						c=getchar();
						if(c=='Y'&&fl)
						{
								cout<<"NOT INDIAN\n";
								fl=0;
						}
						if(c=='I'&&fl)
						{
								cout<<"INDIAN\n";
								fl=0;
						}
				}
				if(fl)
				{
						cout<<"NOT SURE\n";
				}
		}
		return 0;
}
				
