#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	char word[m][2][12], str[12];
	int i,j;

	for(i = 0; i < m; i++)
	{
		gets(str);
		strcpy(word[i][0], str);
		gets(str);
		strcpy(word[i][1], str);
		
		cout<<word[i][0]<<' '<<word[i][1]<<endl;
	}


	for(i = 0; i < n; i++)
	{
		gets(str);
		for(j = 0; j < m; j++)
		{
			if(!strcmp(str, word[j][0]))
			{
				cout << (strlen(word[j][0]) < strlen(word[j][1])) ? word[j][0] : word[j][1];
			}
		}
	}
	
	return 0;
}
