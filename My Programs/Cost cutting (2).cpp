#include<iostream>
#include<algorithm>
using namespace std;
int main()
{	
		int tes;
		cin>>tes;
		for(int a=1;a<=tes;a++)
		{
				long ar[3];
				cin>>ar[0]>>ar[1]>>ar[2];
				sort(ar,ar+3);
				cout<<"Case "<<a<<": "<<ar[1]<<'\n';
		}
		return 0;
}
				
