#include<iostream>
using namespace std;
int main()
{
		int y;
		cin>>y;
		if(!(y%100))
		{
				cout<<!(y%400);
		}
		else
		{
				cout<<!(y%4);
		}
		system("pause");
		return 0;
}
		
