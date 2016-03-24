#include<bits/stdc++.h>
using namespace std;

int f=15,s=15,t=15;
int row,stick;
int current;
int fl=1;
//bool move=0;				//0=user,1=computer
bool winner=0;

bool game_over()
{
		return !(f||s||t);
}
		
void display();		
void ask()
{
		cout<<"From which row would you like to remove sticks? ";
		cin>>row;
		if(row<1||row>3)
		{
				cout<<"Enter correct row number i.e. from 1 to 3\n";
				system("pause");
				display();
		}
		else
		{	
				switch(row)
				{
						case 1: current=f;
						break;
						case 2: current=s;
						break;
						case 3: current=t;
						break;
				}
				if(current==0)
				{
						cout<<"The row is already empty. Enter a valid row number\n";
						system("pause");
						display();
				}
		}		
		cout<<"How many sticks would you like to remove? ";
		cin>>stick;
		if(stick>current)
		{
				cout<<"The row does not have enough sticks to remove. Enter a valid number of sticks\n";
				system("pause");
				display();
		}
		else
		{
				current-=stick;
				switch(row)
				{
						case 1: f=current;
						break;
						case 2: s=current;
						break;
						case 3: t=current;
						break;
				}
		}
}

void tell()		
{
		if(winner==0)
		{
				cout<<"Congratulations! You won!! ";
		}
		else
		{
				cout<<"Sorry you lost. ";
		}
		cout<<'\n';
		cout<<"Would you like to start a new game?\nPress 1 for YES\nPress 0 for NO ";
		int choice;
		cin>>choice;
		if(choice==1)
		{
				f=15;
				s=15;
				t=15;
				display();
		}
		else
		{
				cout<<"Thank you for playing.\n";
				system("pause");
				exit(0);
		}
}


void display()
{
		system("cls");
		cout<<"Row\t\tSticks\t\t\tSticks Left\n\n";
		cout<<1<<"\t\t\t\t\t   "<<f<<'\n';
		for(int i=0;i<4;i++)
		{
				cout<<"       ";	
				for(int j=0;j<f;j++)
				{
						cout<<"| ";
				}
				cout<<'\n';
		}
		cout<<"\n\n";
		cout<<2<<"\t\t\t\t\t   "<<s<<'\n';
		for(int i=0;i<4;i++)
		{
				cout<<"       ";
				for(int j=0;j<s;j++)
				{
						cout<<"| ";
				}
				cout<<'\n';
		}
		cout<<"\n\n";
		cout<<3<<"\t\t\t\t\t   "<<t<<'\n';
		for(int i=0;i<4;i++)
		{
				cout<<"       ";
				for(int j=0;j<t;j++)
				{
						cout<<"| ";
				}
				cout<<'\n';
		}
		cout<<"\n\n";
		if(fl)
		{		cout<<"Your Move\n";
				if(!game_over())
				{
						ask();
				}
				else
				{
						tell();
				}
				fl=0;
				display();
		}
		else
		{
				cout<<"Computer's Move\n";
				//system("pause");
				fl=1;
		}
		
}



				
		



bool is_strategic()
{
				int ar[4][4]={0};
				int fb=f,sb=s,tb=t;
				for(int i=3;i>=0;i--,fb/=2)
				{
						ar[1][i]=fb%2;
				}
				for(int i=3;i>=0;i--,sb/=2)
				{
						ar[2][i]=sb%2;
				}
				for(int i=3;i>=0;i--,tb/=2)
				{
						ar[3][i]=tb%2;
				}
				for(int i=0;i<4;i++)
				{
						ar[0][i]=ar[1][i]+ar[2][i]+ar[3][i];
						if(ar[0][i]==1||ar[0][i]==3)
						{
								return 0;
						}
				}
				return 1;
}



					
				

int main()
{
		lb:
		fl=1;
		display();
		if(is_strategic())
		{
				cout<<"Good move player!\n";
				system("pause");
				srand (time(NULL));
				if(f)
				{
						f-=rand()%f+1;
				}
				else
				{
						if(s)
						{
								s-=rand()%s+1;
						}
						else
						{
								if(t)
								{
										t-=rand()%t+1;
								}
						}
				}
		}
		else
		{
				system("pause");
				int ar[4][4]={0};
				int fb=f,sb=s,tb=t;
				for(int i=3;i>=0;i--,fb/=2)
				{
						ar[1][i]=fb%2;
				}
				for(int i=3;i>=0;i--,sb/=2)
				{
						ar[2][i]=sb%2;
				}
				for(int i=3;i>=0;i--,tb/=2)
				{
						ar[3][i]=tb%2;
				}
				for(int i=0;i<4;i++)
				{
						ar[0][i]=ar[1][i]+ar[2][i]+ar[3][i];
				}
				for(int i=0;i<4;i++)
				{
						if(ar[0][i]==1||ar[0][i]==3)
						{
								if(ar[0][i]==3)
								{
										for(int j=i;j<4;j++)
										{
												if(ar[0][j]==1||ar[0][j]==3)
												{
														ar[1][j]=1-ar[1][j];
												}
										}
								}
								else
								{
										for(int p=1;p<4;p++)
										{
												if(ar[p][i])
												{
														for(int j=i;j<4;j++)
														{
																if(ar[0][j]==1||ar[0][j]==3)
																{
																		ar[p][j]=1-ar[p][j];
																}
														}
												}
										}
								}
								break;
						}
						
				}
				fb=sb=tb=0;
				for(int i=0;i<4;i++)
				{
						fb+=ar[1][i]<<(3-i);
						sb+=ar[2][i]<<(3-i);
						tb+=ar[3][i]<<(3-i);
				}
				f=fb;
				s=sb;
				t=tb;
				if(f==0&&s==0&&t==0)
				{
						winner=1;
				}
		}
		goto lb;
		return 0;
}
		
