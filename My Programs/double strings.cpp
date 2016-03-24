#include<iostream>
using namespace std;
int main()
{
	int tes;
	long n;
	cin>>tes;
	for(int a=0;a<tes;a++)
	{
		cin>>n;
		cout<<n-n%2<<endl;
	}
	return 0;
}
		
