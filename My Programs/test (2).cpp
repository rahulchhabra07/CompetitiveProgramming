#include<iostream>
#include<fstream>
#include<set>

using namespace std;
typedef pair<int, int> ii;
int main()
{
	//	ofstream fout ("sub1.out");
  //  ifstream cin ("sub1.in");
		int tes;
		cin>>tes;
		for(int u=0;u<tes;u++)
		{
				cout<<"Case #"<<u+1<<": ";
				long long B,N;
				cin>>B>>N;
				long M[B];
				for(int i = 0;i < B;i++) cin>>M[B];

				if(B-N>=0)
					cout<<N<<'\n';

				else
				{
						set<ii> barbers;
						for(int i = 0;i < B;i++)
						{
								barbers.insert(ii(M[i], i+1));
						}
						ii top;
						for(int i = B;i < N-1;i++)
						{
								top = *barbers.begin();
								barbers.erase(barbers.begin());
								barbers.insert(ii(top.first+M[top.second-1], top.second));
						}

						top = *barbers.begin();
						cout<< top.second<<'\n';
				}
		}
		return 0;
}
