#include<bits/stdc++.h>
using namespace std;

class seller;

class grandParent
{
		int id;
	  vector <seller>  buyers;
		vector <seller> pyramid;
		
		public:			
			bool operator< (grandParent a, grandParent b)
			{
					return a.pyramid.size() < b.pyramid.size();
			}
};

class seller
{
		int id;		
		vector <seller> buyers;
		
		public:
			bool operator< (seller a, seller b)
			{
					return a.buyers.size() < b.buyers.size();
			}
};

class buyer
{
		int id;
		int parentId;
		int grandParentId;
};

grandParent leader [/*size*/];
vector <seller> sellerOfDay;
vector <buyer> buyerOfDay;

map <int> bestSeller;
map <int> leaderboard;

void registrationNewBuyer(int id, int parent_id)
{
		int flag = 0;	
		for(int i = 0; i < int(sellerOfDay.size()); i++)
		{
				if(sellerOfDay[i].id == parent_id)
				{
						flag = 1;			//Seller found
						buyerOfDay.push_back(buyer(id, parent_id, sellerOfDay[i].grandParentId));
						sellerOfDay[i].buyer.push_back(buyerOfDay.back());
						grandParent[sellerOfDay[i].grandParentId].pyramid.push_back(buyerOfDay.back());
				}
		}
		if(flag == 0)
		{
				//Seller not found
		}		
}

void rank();

void dayOver()
{
		rank();
		numberOfseller = int(sellerOfDay.size())
		for(int i = 0; i < numberOfSeller; i++)
		{
				for(int j = 0; j < int(sellerOfDay[0].buyers.size()); j++)
				{
						sellerOfDay.push_back(sellerOfDay.buyers);
						sellerOfday.erase(sellerOfDay.begin());
				}
		}
}

void rank()
{
		for(int i = 0; i < int(sellerOfDay.size()); i++)
		{
				bestSeller[sellerOfDay[i].id] = sellerOfDay[i].buyers.size();
		}
		for(int i = 0; i < int(leader.size()); i++)
		{
				leaderboard[leader[i].id] = leader[i].pyramid.size());
		}
}


		
								
						
		
		
