#include<iostream>
using namespace std;


int main()
{
		int tes;
		cin>>tes;
		for(int u=0;u<tes;u++)
		{
				int n;
				cin>>n;
				if(n/1000)
				{
						switch(n/1000)
						{
								case 1:
									cout<<"M";
									break;
								case 2:
									cout<<"MM";
									break;
								case 3:
									cout<<"MMM";
									break;
						}
				}
				if((n%1000)/100)
				{
						switch((n%1000)/100)
						{
								case 1:
									cout<<"C";
									break;
								case 2:
									cout<<"CC";
									break;
								case 3:
									cout<<"CCC";
									break;
								case 4:
									cout<<"CD";
									break;
								case 5:
									cout<<"D";
									break;
								case 6:
									cout<<"DC";
									break;
								case 7:
									cout<<"DCC";
									break;
								case 8:
									cout<<"DCCC";
									break;
								case 9:
									cout<<"CM";
									break;
						}
				}
				if((n%100)/10)
				{
						switch((n%100)/10)
						{
								case 1:
									cout<<"X";
									break;
								case 2:
									cout<<"XX";
									break;
								case 3:
									cout<<"XXX";
									break;
								case 4:
									cout<<"XL";
									break;
								case 5:
									cout<<"L";
									break;
								case 6:
									cout<<"LX";
									break;
								case 7:
									cout<<"LXX";
									break;
								case 8:
									cout<<"LXXX";
									break;
								case 9:
									cout<<"XC";
									break;
						}
				}
				if(n%10)
				{
						switch(n%10)
						{
								case 1:
									cout<<"I";
									break;
								case 2:
									cout<<"II";
									break;
								case 3:
									cout<<"III";
									break;
								case 4:
									cout<<"IV";
									break;
								case 5:
									cout<<"V";
									break;
								case 6:
									cout<<"VI";
									break;
								case 7:
									cout<<"VII";
									break;
								case 8:
									cout<<"VIII";
									break;
								case 9:
									cout<<"IX";
									break;
						}
				}
				cout<<'\n';
		}
		return 0;
}
						
							
		
