#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
int main()
{
		int a,b,c;
		cin>>a>>b>>c;
		int v1[a],v2[b],v3[c];
		for(int i=0;i<a;i++)
		{
				cin>>v1[i];
		}
		for(int i=0;i<b;i++)
		{
				cin>>v2[i];
		}
		for(int i=0;i<c;i++)
		{
				cin>>v3[i];
		}
		set<int> as;		
		for(int i=0;i<a;i++)
		{
				if(binary_search(v2,v2+b,v1[i])||binary_search(v3,v3+c,v1[i]))
				{
						as.insert(v1[i]);
				}
		}
		for(int i=0;i<c;i++)
		{
				if(binary_search(v3,v3+c,v2[i]))
				{
						as.insert(v2[i]);
				}
		}
		cout<<as.size()<<'\n';
		for(set<int>::iterator k=as.begin();k!=as.end();k++) 
		{
				cout<<*k<<'\n';
				
		}

//		system("pause");
		return 0;
}
				
				
				
