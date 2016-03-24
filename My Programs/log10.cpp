#include<cmath>
#include<iostream>
using namespace std;
int main()
{
		double l=0;
		for(int i=1;i<=100;i++)
		{
				l+=log10(i);
		}
		cout<<l;
		system("pause");
		return 0;
}
