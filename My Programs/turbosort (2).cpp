#include<iostream>
#include<algorithm>
using namespace std;



int main()
{
		iostream::sync_with_stdio(false);
		cin.tie(NULL);
    long n;
    cin>>n;
    long ar[n];
    for(long i=0;i<n;i++)
    {
    		cin>>ar[i];
    }
    std::sort(ar,ar+n);
    for(long i=0;i<n;i++)
    {                        
    		cout<<ar[i]<<endl;
    }
  //   system("pause");
    return 0;
}
