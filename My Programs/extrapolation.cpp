#include<iostream>
#include<fstream>
using namespace std;





int f(int ar[], int n)
{
	
		int br[n-1];
		for(int i=0;i<n-1;i++)
		{
				br[i]=ar[i+1]-ar[i];
		}
		int c,fl=1;
		c=br[n-2];
		for(int i=0;(i<n-2)&&(fl==1);i++)
		{
				fl=(br[i]==c);
		}		
		if(fl)
		{
				//cout<<n<<'\t'<<c+ar[n-1]<<endl;
				return c+ar[n-1];
		}
		else
		{
				//cout<<"call"<<n<<c+f(br,n-1);
				return ar[n-1]+f(br,n-1);
				//cout<<"call"<<n<<c+f(br,n-1);
		}
}





int main()
{
		int n;
		cin>>n;
		int ar[n];
		for(int i=0;i<n;i++)
		{
				cin>>ar[i];
		}
		int k;
		cin>>k;
		if(k<n)
		{
				cout<<ar[k-1];
		}
		else
		{
				int br[k];
				for(int i=0;i<n;i++)
				{	
						br[i]=ar[i];
				}
				for(int i=n;i<k;i++)
				{
						br[i]=f(br,i);
						cout<<br[i]<<endl;
				}
				cout<<br[k-1];
		}
		system("pause");
		return 0;
}
