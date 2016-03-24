#include<iostream>
#include<set>
using namespace std;
int main()
{	
		for(int u=0;u<10;u++)
		{	
				set<int> s;
				for(int i=0;i<10;i++)
				{
						int a;
						cin>>a;
						s.insert(a%42);
				}
				cout<<s.size()<<'\n';
		}
		return 0;
}
