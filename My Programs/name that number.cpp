/*
ID: rahulch1
PROG: namenum
LANG: C++                  
*/
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;



void con(char ar[])
{
		for(int i=0;ar[i]!='\0';i++)
		{
				switch(ar[i])
				{
						case 'A': case 'B': case 'C':
								ar[i]='2';break;
						case 'D': case 'E': case 'F':
								ar[i]='3';break;
						case 'G': case 'H': case 'I':
								ar[i]='4';break;
						case 'J': case 'K': case 'L':
								ar[i]='5';break;
						case 'M': case 'N': case 'O':
								ar[i]='6';break;
						case 'P': case 'R': case 'S':
								ar[i]='7';break;
						case 'T': case 'U': case 'V':
								ar[i]='8';break;
						case 'W': case 'X': case 'Y':
								ar[i]='9';break;
				}
		}
}

		



int main() 
{
    ofstream fout ("namenum.out");
    ifstream fin ("namenum.in");
    ifstream fid ("dict.txt");
    char str[13],ar[13],arr[13];
    fin.getline(str,13);
    int fl=1;
    while(!fid.eof())
    {
				fid.getline(ar,13);
				if(strlen(str)==strlen(ar))
				{
						strcpy(arr,ar);
						con(ar);
						//fout<<ar<<endl;
						if(!strcmp(ar,str))
						{
								fout<<arr<<endl;
								fl=0;
						}
				}
		}
		if(fl)
		fout<<"NONE\n";
		return 0;
}
		
				
    
    
