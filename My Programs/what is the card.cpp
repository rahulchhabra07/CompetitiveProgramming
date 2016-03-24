#include<bits/stdc++.h>
using namespace std;
int main()
{
		int tes;
		cin>>tes;
		vector<string>  ar(55);
		while(tes--)
		{
				for(int i=0;i<52;i++)
				{
						cin>>ar[i];
				}
				int key=26;
				int y=0;
				for(int i=0;i<3;i++)
				{
						int x=0;
						if(isdigit(ar[key][0]))
						{
								x=ar[key][0];
						}
						else
						{
								x=10;
						}
						y+=x;
						ar.erase(ar.begin()+key-(10-x),ar.begin()+key);			//check!!
				}
				cout<<ar[y+2]<<'\n';
		}
		return 0;
}
		
