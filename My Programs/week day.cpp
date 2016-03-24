#include<iostream>
#include<ctime>
using namespace std;
int main()
{
		
		tm t={0,0,0,9,7,2010-1900};
		//cin>>t.tm_year>>t.tm_mon>>t.tm_mday;
		mktime(&t);
		cout<<t.tm_wday;
		return 0;
}
		
