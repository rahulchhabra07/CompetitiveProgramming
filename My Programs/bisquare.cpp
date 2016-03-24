#include<iostream>
#include<set>
using namespace std;
int main()
{
          int n;
          cin>>n;
          set<int> bisq;
          for(int i=0;i<n;i++)
          {
							for(int j=0;j<i;j++)
							{
									bisq.insert((i*i)+(j*j));
							}
							for(std::set<int>::iterator k=bisq.begin;k!=bisq.end;k++)
							{
									cout<<bisq(k)<<'\t';
							}
							cout<<'\n';
					}
					return 0;
}
							
				                  