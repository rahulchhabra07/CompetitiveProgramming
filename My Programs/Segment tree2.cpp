#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

class segmenttree
{
		private:
				vi st,a;
				int n;
				int left(int p)
				{
						return p<<1;
				}
				int right(int p)
				{
						return (p<<1)+1;
				}
				void build(int p,int l,int r)
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
								st[p]=(a[p1]<a[p2])?p1:p2;
						}
				}
				int rmq(int p,int l,int r,int i,int j)
				{
						if(i>r||j<l)
						{
								return -1;
						}
						if(i>l&&j<r)
						{
								return st[p];
						}
						int p1=rmq(left(p),l,(l+r)/2,i,j);
						int p2=rmq(right(p),(l+r)/2+1,r,i,j);
						return (a[p1]<a[p2])?p1:p2;
				}
		public:
				segmenttree(const vi _a)
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
						
								
