#include<iostream>
using namespace std;
int main()
{
		int n;
		cin>>n;
		int ar[1+n],arr[1+n];
		for(int i=1;i<=n;i++)
		{
				cin>>ar[i];
				arr[ar[i]]=i;
		}
		for(int i=1;i<=n;i++)
		{
				cout<<arr[i]<<' ';
		}
		return 0;
}
		
		
