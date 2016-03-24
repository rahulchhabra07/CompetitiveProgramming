#include<bits/stdc++.h>
using namespace std;
int main()
{
		int n;
		while(cin>>n)
		{
				long long ar[n];
				for(int i=0;i<n;i++)
				{
						cin>>ar[i];
				}
				bool chk[n];
				for(int i=0;i<n;i++) chk[i]=0;
				for(int i=1;i<n;i++)
				{
						//int diff=abs(ar[i]-ar[i-1]);
						//if(diff<n&&diff>0)
						chk[abs(ar[i]-ar[i-1])]=1;
				}
				bool fl=1;
				for(int i=1;i<n;i++)
				{
						if(chk[i]==0&&fl)
						{
								cout<<"Not jolly\n";
								fl=0;
								break;
						}
				}
				if(fl)
				{
						cout<<"Jolly\n";
				}
				//for(int i=0;i<n;i++) cout<<chk[i]<<' ';
		}
		return 0;
}
