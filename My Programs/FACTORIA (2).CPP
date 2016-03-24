#include<iostream>
#include<cmath>
using namespace std;








void mult(int ar[],int n)
{
	for(int j=0;j<200;j++)
	{
		ar[j]*=n;
	}
	for(int i=199;i>=0;i--)
	{
		ar[i-1]+=ar[i]/10;
		ar[i]%=10;
	}
}



void fact(int ar[],int n)
{
	while(n)
	{
		mult(ar,n);
		n--;
	}
}





int main()
{
	int tes;
	cin>>tes;
	for(int a=0;a<tes;a++)
    {
             
    int n,flag=0;
	cin>>n;
	int ans[200];
	for(int j=0;j<200;j++)
	{
		ans[j]=0;
	}
	ans[199]=1;
	fact(ans,n);
	for(int i=0;i<200;i++)
	{
		if(ans[i]&&!flag)
		{
			cout<<ans[i];
			flag=1;
		}
		else
		{
			if(flag)
			{
				cout<<ans[i];
			}
		}
		
	}
	cout<<endl;
}
	//system("pause");
	return 0;
}




