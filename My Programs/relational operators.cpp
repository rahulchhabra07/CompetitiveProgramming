#include<bits/stdc++.h>
using namespace std;
int main()
{
		int tes;
		cin>>tes;
		while(tes--)
		{
				long long a,b;
				cin>>a>>b;
				if(a>b)
					cout<<">\n";
				if(a<b)
					cout<<"<\n";
				if(a==b)
					cout<<"=\n";
		}
		return 0;
}
