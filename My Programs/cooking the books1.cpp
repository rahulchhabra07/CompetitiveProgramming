#include<iostream>
#include<cstdio>
#include<climits>
#include<cstring>
#include<fstream>
#include<cstdlib>
using namespace std;
char *strrev(char *s){
                int i,n;
                char *reverse;
 
                for(i=0;s[i]!='\0';i++)
                ;
 
                reverse=malloc(i*sizeof(char));
                n=i-1;
                for(i=n;i>=0;i--)
                                reverse[n-i]=s[i];
                reverse[n+1]='\0';
                return reverse;
}
int main()
{
		//ifstream fin("a.txt");
		//ofstream fout("b.txt");
		int tes;
		cin>>tes;
		cin.ignore(5,'\n');
		for(int u=0;u<tes;u++)
		{
				cout<<"Case #"<<u+1<<": ";
				char str[20],s[20];
				cin.getline(str,20);
				strcpy(s,str);
				if(!strcmp(str,"0"))
				{
						cout<<0<<' '<<0<<endl;
						continue;
				}
				lmax:
				int tmax=0,pmax=0;
				for(int i=0;str[i]!='\0';i++)
				{
						if(str[i]>tmax)
						{
								tmax=str[i];
								pmax=i;
						}
				}			
				if(pos==0)
				{
						cout<<str[0];
						strrev(str);
						int l=strlen(str);
						str[l-1]='\0';
						strrev(str);
						goto lmax;
				}
				str[pmax]=str[0];
				str[0]=tmax;
				cout<<str<<endl;
		}
		return 0;
}
						
