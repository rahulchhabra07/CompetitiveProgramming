#include<iostream>
using namespace std;
int main()
{
	int tes,k;
	cin>>tes;
	for(int a=1;a<=tes;a++)
	{
		cin>>k;
		k+=k/26;
		for(int i=k;i>=0;i--)
		{
                
			                cout<<char(97+i%26);
                
			
		}
		cout<<endl;
	}
	//system("pause");
	return 0;
}
		
