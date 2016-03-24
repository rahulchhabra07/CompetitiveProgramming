#include<iostream>
#include<climits>
using namespace std;
int main()
{	
		int tes;
		cin>>tes;
		for(int u=0;u<tes;u++)
		{
				int n;
				cin>>n;
				long a=LONG_MAX,b=LONG_MAX;
				for(int i=0;i<n;i++)
				{
						long p;
						cin>>p;
						if(p<a&&p<b)
						{
								b=a;
								a=p;
						}
						if(p>a&&p<b)
						{
								b=p;
						}
						//cout<<a<<b<<endl;
				}
				cout<<a+b<<'\n';
		}
		//system("pause");
		return 0;
}
