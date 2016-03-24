#include<iostream>
using namespace std;
int main()
{
		iostream::sync_with_stdio(false);
		int n;
		cin>>n;
		int ar[n];
		for(int i=0;i<n;i++)
		{
				cin>>ar[i];
		}
		int score[n];
		for(int i=0;i<n;i++)
		{
				for(int ct=0;ct<n;ct++)
				{
						int j=i+ct;
						j%=n;
						score[j]=ar[ct]+j+1;
						//cout<<j<<' '<<score[j]<<' '<<ct<<'\n';
				}
				//cout<<endl;
				int max=0;
				for(int j=0;j<n;j++)
				{
						//cout<<score[j]<<' ';
						if(score[j]>max)
						{
								max=score[j];
						}
				}
				cout<<max<<' ';
		}
		//system("pause");
		return 0;
}
