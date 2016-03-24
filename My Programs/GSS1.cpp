#include<bits/stdc++.h>
using namespace std;

typedef vector<long long int> vi;

class SegTree
{
		private:
			vi A;
			struct data {long long int  ans,pref,suff,sum,fl;};
			
			data combine(data l,data r)
			{	
					data res;
					res.sum=l.sum+r.sum;
					res.ans=max(max(l.ans,r.ans),l.suff+r.pref);
					res.pref=max(l.pref,l.sum+r.pref);
					res.suff=max(r.suff,r.sum+l.suff);
					return res;
			}
			
			data make_data(long long int  n)
			{
					data res;
					res.sum=res.ans=res.pref=res.suff=n;
					res.fl=0;
					return res;
			}
			
			vector<data> st;
			unsigned long long int  n;
			long long int  left(long long int  p) {return p<<1;}
			long long int  right(long long int  p) {return (p<<1)+1;}
			
			void build(long long int  p,long long int  L,long long int  R)
			{
					//cout<<p<<' '<<L<<' '<<R<<endl;
					if(L==R)
						st[p]=make_data(A[L]);
					else
					{
							build(left(p),L,(L+R)/2);
							build(right(p),(L+R)/2+1,R);							
							data p1=st[left(p)],p2=st[right(p)];
							st[p]=combine(p1,p2);
					}
			}
			
			data rmq(long long int  p,long long int  L,long long int  R,long long int  i, long long int  j)
			{
					//cout<<p<<' '<<L<<' '<<R<<' '<<i<<' '<<j<<endl;
					if(i>R||j<L) {data x=make_data(0); x.fl=-1; return x;}
					if(L>=i&&R<=j) return st[p];
					data p1=rmq(left(p),L,(L+R)/2,i,j);
					data p2=rmq(right(p),(L+R)/2+1,R,i,j);
					
					if(p1.fl==-1) return p2;
					if(p2.fl==-1) return p1;
					return combine(p1,p2);
			}
		public:
			SegTree(const vi &_A)
			{
					A=_A; n=(long long int )A.size();
					st.assign(4*(n),make_data(0));
					build(1,0,n-1);
			}
			void show()
			{
					for(long long int  i=0;i<4*n;i++)
					{
							cout<<st[i].ans<<' '<<st[i].sum<<' '<<st[i].pref<<' '<<st[i].suff<<endl;
					}
			}
			long long int  rmq(long long int  i,long long int  j) {return rmq(1,0,n-1,i,j).ans;}
};


int  main()
{
		ios::sync_with_stdio(0);
		long long int  n;
		cin>>n;
		long long int  ar[n];
		for(long long int  i=0;i<n;i++)
		{
				cin>>ar[i];
		}
		vi A(ar,ar+n);
		SegTree st(A);
		//st.show();
		long long int  m;
		cin>>m;
		for(long long int  i=0;i<m;i++)
		{
				long long int  xi,xj;
				cin>>xi>>xj;
				cout<<st.rmq(xi-1,xj-1)<<'\n';
		}
		return 0;
}
					

