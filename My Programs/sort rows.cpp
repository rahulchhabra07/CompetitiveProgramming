#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
		int n;
		cin>>n;
		vector<int> ar[n];
		int m;
		for(int i=0;i<n;i++)
		{
				for(int j=0;j<50;j++)
				{
						cin>>m;
						if(m==-1)
						{
								break;
						}
						else
						{
								ar[i].push_back(m);
						}
				}
		}
		sort(ar,ar+n);
		for(int i=0;i<n;i++)
		{
				for(int j=0;j<ar[i].size();j++)
				{
						cout<<ar[i][j]<<' ';
				}
				cout<<endl;
		}
		//system("pause");
		return 0;
}
				
