#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
		long tes;
		cin>>tes;
		for(long u=0;u<tes;u++)
		{
				long l,ct=0;
				cin>>l;
				cin.ignore(5,'\n');
				char str[l+1];
				gets(str);
				for(int i=0;i<l;i++)
				{
						if(str[i]=='1')
						{
								ct++;
						}
				}
				cout<<(ct*(ct+1))/2;
				if(u<tes-1)
				{
						cout<<endl;
				}
		}
		system("pause");
		return 0;
}
				
