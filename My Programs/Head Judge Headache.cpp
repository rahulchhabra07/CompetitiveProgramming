#include<bits/stdc++.h>
using namespace std;


struct problem
{
		int tim;
		bool verd;
};

struct team
{
		team();
		void final();
		int no;
		problem prob[8];
		int total_time;
		int total_prob;
};

team::team()
{	
		for(int i=0;i<8;i++)
		{
				prob[i].verd=0;
				prob[i].tim=0;
		}
	  total_time=0;
		total_prob=0;
}

void team::final()
{
		for(int i=0;i<7;i++)
		{
				if(prob[i].verd) 
				{
						total_prob++; 
						total_time+=prob[i].tim;
				}
		}
}				

vector<team> v;
		
bool operator==(team a,team b)
{
		return (a.no==b.no);
}

bool operator<(team a,team b)
{
		if(a.total_prob>b.total_prob) return 1;
		if(a.total_time>b.total_time) return 1;
		if(a.no<b.no) return 1;
		return 0;
}
					
int main()
{
		int n;
		while(cin>>n)
		{
				team dua;
				dua.no=n;
				vector<team>::iterator it=find(v.begin(),v.end(),dua);
				if(it!=v.end())
				{
						v.push_back(dua);
						it=find(v.begin(),v.end(),dua);
				}
				
				char p;
				cin>>p;
				char tim[4];
				cin>>(tim);
				int timed;
				timed=(tim[0]-48)*60+(tim[2]-48)*10+tim[3]-48;
				char ver;
				cin>>ver;
				if(ver=='Y'&&it->prob[p-65].verd!=1)
				{
						it->prob[p-65].tim+=timed;
						it->prob[p-65].verd=1;
				}
				
				/*if(ver=='N')//&&it->prob[0].verd!=1)
				{
						it->prob[0].tim+=(20);
						it->prob[0].verd=0;
				}*/
				cout<<"APPLE";
		}
		sort(v.begin(),v.end());
		cout<<"RANK TEAM PRO/SOLVED TIME\n";
		int ct=1;
		for(vector<team>::iterator it=v.begin();it!=v.end();it++,ct++)
		{
				cout<<"  "<<ct<<"    "<<it->no<<"      "<<it->total_prob<<"   "<<it->total_prob<<'\n';
		}
		return 0;
}
		

		
						
				
				
				
