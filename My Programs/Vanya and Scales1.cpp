#include<bits/stdc++.h>
using namespace std;

vector<long> representation;

void new_div(long a, long w)
{
		long Q, R;
		Q = a / w;
		R = a % w;
		bool flag=0;
		if(Q == R)
		{
				flag=1;
		}
		if(R > w / 2)
		{
				Q++;
				R = w - R;
		}		
		representation.push_back(R);
		if(flag == 1)
		{
				return;
		}
		new_div(Q, w);
}

int main()
{
		long w, m;
		cin >> w >> m;
		new_div(m, w);
		for(unsigned int i = 0; i < representation.size(); i++)
		{
				if(representation[i] != 1 && representation[i] != 0 && representation[i] != -1)
				{
						cout << "NO";
						return 0;
				}
		}
		cout << "YES";
		return 0;
}
		
