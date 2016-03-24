#include<iostream>
#include<vector>
using namespace std;
int subarrayCount(std::vector< int > a, int k)
{
  	int ct=0;
		for(int i=0;i<a.size();i++)
		{
      	if(a[i]>k)
        {
          	for(int j=i+1;j<a.size();j++)
            {
              	if(a[j]<=k||j==a.size()-1)
                {
                  	cout<<i<<' '<<j<<endl;
                  	ct+=((j-i)*((j-i)+1))/2;
                		i=j;
                		break;
                		//cout<<i<<' '<<j<<endl;
                } 
            }
        }
    }
  	return ct;
                  	
  	
}

int main()
{
		vector<int> a;
		a.push_back(3);
		a.push_back(2);
		a.push_back(3);
		a.push_back(4);
		a.push_back(2);		
		cout<<subarrayCount(a,2);
		return 0;
}
		
		
