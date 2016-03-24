#include<bits/stdc++.h>
using namespace std;
int main()
{
		int n;
		while(cin>>n)
		{
				int qu=0,st=0,pr=0,ct=0;
				queue<int> q;
				stack<int> s;
				priority_queue<int> p;
				int a,b;
				for(int i=0;i<n;i++)
				{
						cin>>a>>b;
						{
								if(a==1)
								{
										q.push(b);
										s.push(b);
										p.push(b);
								}
								if(a==2)
								{
									
										ct++;
										if(!q.empty()){
										if(q.front()==b) qu++;
										q.pop();
										if(s.top()==b) st++;
										s.pop();
										if(p.top()==b) pr++;
										p.pop();}
								}
						}
				}
				int total=0;
				if(qu==ct)	total+=1;
				if(st==ct)  total+=10;
				if(pr==ct)	total+=100;
				switch(total)
				{
						case 1:	cout<<"queue\n"; break;
						case 10:  cout<<"stack\n"; break;
						case 100:  cout<<"priority queue\n"; break;
						case 101: case 110: case 11:	case 111: cout<<"not sure\n"; break;
						default: cout<<"impossible\n";
				}
		}
		return 0;
}
						

						
						
								
