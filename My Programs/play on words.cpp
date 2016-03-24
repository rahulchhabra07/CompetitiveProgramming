#include<iostream>
#include<cstdio>
#include<cstring>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
		int tes;
		cin>>tes;
		for(int u=0;u<tes;u++)
		{
				multiset<char> st,en;
				long long n;
				cin>>n;
				cin.ignore(5,'\n');
				for(long long v=0;v<n;v++)
				{
						char s[1001];
						gets(s);
						st.insert(s[0]);
						en.insert(s[strlen(s)-1]);
				}
				std::vector<int> v(st.size()+en.size());
				std::vector<int>::iterator it;
				it=std::set_intersection(st.begin(),st.end(),en.begin(),en.end(), v.begin());
				v.resize(it-v.begin());
				if(v.size()>=(st.size()-1))
				{
						cout<<"Ordering is possible.\n";
				}
				else
				{
						cout<<"The door cannot be opened.\n";
				}
		}
		//system("pause");
		return 0;
}
						
		