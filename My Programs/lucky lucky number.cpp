#include<iostream>
using namespace std;
int main()
{
		int tes;
		cin>>tes;
		for(int u=0;u<tes;u++)
		{	
				long long n;
				cin>>n;
				int fl=-1;
				while(n>=0)
				{
						if(n%7==0)
						{
								cout<<n<<'\n';
								fl=0;	
								break;
						}
						n-=4;
				}
				if(fl)
				{
						cout<<fl<<'\n';
				}
		}
		return 0;
}
				
				
				
					
