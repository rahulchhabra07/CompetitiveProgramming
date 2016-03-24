#include<bits/stdc++.h>
using namespace std;
int main()
{
		ios_base::sync_with_stdio(0);
		int s,b;
		while(cin>>s>>b, s||b)
		{
				bool ar[s+1];
				for(int i=1;i<=s;i++) ar[i]=1;
				while(b--)
				{
						int l, r;
						cin>>l>>r;
						for(int i=l;i<=r;i++)
						{
								ar[i]=0;
						}
						int fl=1,fr=1;
						do
						{
								l--;
								if(l>0&&ar[l])
								{
										cout<<l<<' ';
										fl=0;
										break;
								}
						}
						while(l>0);
						if(fl)
						{
								cout<<"* ";
						}
						do
						{
								r++;
								if(r<s+1&&ar[r])
								{
										cout<<r<<'\n';
										fr=0;
										break;
								}
						}
						while(r<s+1);
						if(fr)
						{
								cout<<"*\n";
						}		
				}
				cout<<"-\n";
		}
		return 0;
}
										
										
										
									
										
										
										
										
										
										
								
