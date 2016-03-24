/*
ID: rahulch1
PROG: test
LANG: C++                  
*/
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
    ofstream fout ("gift1.out");
    ifstream fin ("gift1.in");
    int np;
		fin>>np;
		fin.ignore(5,'\n');
		char ar[np][20];
		int arr[np][3];
		for(int i=0;i<np;i++)
		{
				arr[i][2]=0;
		}
		for(int i=0;i<np;i++)
		{
				fin.getline(ar[i],20);
		}
		for(int i=0;i<np;i++)
		{
				char arn[20];
				fin.getline(arn,20);
				
						for(int j=0;j<np;j++)
						{
								if(!(strcmp(arn,ar[j])))
								{
										fin>>arr[j][1]>>arr[j][0];
										fin.ignore(5,'\n');
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
												fin.getline(arfn,20);
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
				fout<<ar[i]<<' '<<arr[i][2]-arr[i][1]<<'\n';								
		}
		//system("pause");
		return 0;
}
