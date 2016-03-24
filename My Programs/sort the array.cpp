#include<iostream>
using namespace std;
int main()
{
		int n;
		cin>>n;
		int ar[n];
		for(int i=0;i<n;i++)
		{
				cin>>ar[i];
		}
		for(int i=1;i<n;i++)
		{	
				if(ar[i]<ar[i-1])
				{
						for(int j=i+1;j<n;j++)
						{
								if(ar[j]>ar[j+1]||j==n-1)
								{
										if(ar[i-1]<ar[j])
										{
												reverse(ar+i-1,ar+j);
												for(int k=0;k<n;k++)
												{	
														if(ar[k]<ar[k-1])
														{
																cout<<"no";
																return 0;
														}
												}
														cout<<"yes\n";
														cout<<i<<' '<<j;
														return 0;
										}
										else
										{
												cout<<"no";
												return 0;
										}											
								}
						}
				}
		}
}
		
			
