#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

class segtree
{
		private:
				vi a,st;
				int n;
				int left(int p)
				{
						return p<<1;
				}
				int right(int p)
				{
						return (p<<1)+1;
				}
				void build(int p, int l, int r)
				{
						if(l==r)
						{
								st[p]=l;
						}
						else
						{
								build(left(p),l,(l+r)/2);
								build(right(p),(l+r)/2+1,r);
								int p1=st[left(p)];
								int p2=st[right(p)];
								st[p]=(a[p1]>=a[p2])?p1:p2;
						}
				}
				int rmq(int p,int l, int r, int i, int j)
				{
						if(l>j||r<i)
						{
								return -1;
						}
						if(l>=i&&r<=j)
						{
								return st[p];
						}
						int p1=rmq(left(p),l,(l+r)/2,i,j);
						int p2=rmq(right(p),(l+r)/2+1,r,i,j);
						if(p1==-1)		return p2;
						if(p2==-1)		return p1;
						return (a[p1]>=a[p2])?p1:p2;
				}
		public:				
				segtree(const vi &_a)
				{
						a=_a;
						n=a.size();
						st.assign(4*n,0);
						build(1,0,n-1);
				}
				int rmq(int i,int j)
				{
						return rmq(1,0,n-1,i,j);
				}
};

int main()
{
		int n;
		while(cin>>n,n)
		{
				int q;
				cin>>q;
				vi _a;
				_a.assign(n,0);
				for(int i=0;i<n;i++)
				{
						int a;
						cin>>a;
						_a[a-1]++;
				}
				segtree seg(_a);
				while(q--)
				{
						int i,j;
						cin>>i>>j;
						i--;
						j--;
						cout<<seg.rmq(i,j)<<'\n';
				}
				cout<<'\n';
		}
		return 0;
}
			
