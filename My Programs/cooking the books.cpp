#include<iostream>
#include<cstdio>
#include<climits>
#include<cstring>
#include<fstream>
using namespace std;
int main()
{
		ifstream fin("a.txt");
		ofstream fout("b.txt");
		int tes;
		fin>>tes;
		fin.ignore(5,'\n');
		for(int u=0;u<tes;u++)
		{
				
				char str[20];
				fin.getline(str,20);
				if(!strcmp(str,"0"))
				{
						fout<<"Case #"<<u+1<<": "<<0<<' '<<0<<endl;
						continue;
				}
				int tmax=0,tmin=INT_MAX,pmax=0,pmin=0;
				for(int i=0;str[i]!='\0';i++)
				{
						if(str[i]>tmax&&str[i]!='0')
						{
								tmax=str[i];
								pmax=i;
						}
						if(str[i]<tmin&&str[i]!='0')
						{
								tmin=str[i];
								pmin=i;
						}
				}
				fout<<"Case #"<<u+1<<": ";
				char s[20];
				strcpy(s,str);
				str[pmin]=str[0];
				str[0]=tmin;
				fout<<str<<' ';
				s[pmax]=s[0];
				s[0]=tmax;
				fout<<s<<endl;
		}
		return 0;
}
						
