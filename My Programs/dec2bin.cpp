#include<iostream>
#include<cstring>
using namespace std;
int main()
{
		int n,i=0;
		char ar[10];
		cin>>n;
		while(n)
		{
				ar[i]=n%2+48;
				i++;
				n/=2;
		}
		ar[i]='\0';
		strrev(ar);
		cout<<endl<<ar;
		system("pause");
		return 0;
}
		
						
