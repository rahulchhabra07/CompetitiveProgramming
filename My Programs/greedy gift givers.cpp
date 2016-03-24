#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
		int np;
		cin>>np;
		cin.ignore(5,'\n');
		char ar[np][20];
		int arr[np][3];
		for(int i=0;i<np;i++)
		{
				arr[i][2]=0;
		}
		for(int i=0;i<np;i++)
		{
				gets(ar[i]);
		}
		for(int i=0;i<np;i++)
		{
				char arn[20];
				gets(arn);
				
						for(int j=0;j<np;j++)
						{
								if(!(strcmp(arn,ar[j])))
								{
										cin>>arr[j][1]>>arr[j][0];
										cin.ignore(5,'\n');
										if(arr[j][0])
										{
												arr[j][2]+=arr[j][1]%arr[j][0];
										}
										else
										{
												arr[j][2]+=arr[j][1];
										}
										for(int k=0;k<arr[j][0];k++)
										{
												char arfn[20];
												gets(arfn);
												for(int l=0;l<np;l++)
												{
														if(!(strcmp(arfn,ar[l])))
														{
																arr[l][2]+=arr[j][1]/arr[j][0];
														}
														//break;
												}
										}
										//break;
								}
						}								
		}				
		for(int i=0;i<np;i++)
		{
				cout<<ar[i]<<' '<<arr[i][2]-arr[i][1]<<'\n';								
		}
		system("pause");
		return 0;
}
