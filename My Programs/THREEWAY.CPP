#include<iostream.h>
#include<conio.h>
#include<math.h>


float dist(int x1,int y1,int x2,int y2)
{
	float d;
	d=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
	return d;
}


void main()
{
	clrscr();
	int tes,x1,x2,x3,y1,y2,y3,lt,ct;
	float d12,d23,d31;
	cin>>tes;
	for(int a=1;a<=tes;a++)
	{
		ct=0;
		cin>>lt>>x1>>y1>>x2>>y2>>x3>>y3;
		d12=dist(x1,y1,x2,y2);
		d23=dist(x2,y2,x3,y3);
		d31=dist(x3,y3,x1,y1);
		if(d12<=lt){ct++;}
		if(d23<=lt){ct++;}
		if(d31<=lt){ct++;}
		if(ct>1)cout<<"Yes";
		else cout<<"No";
	}
	getch();
}




