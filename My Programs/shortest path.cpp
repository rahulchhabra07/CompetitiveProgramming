#include<iostream>
#include<cmath>
#include<queue>
using namespace std;





int n=4;
int a[4][4];
int mark[4][4];
int dist[4][4];
struct cord
{
		int a,b;
}c;





int l(int a,int b)
{
		if(a>=0&&a<n&&b>=0&&b<n)
		return 1;
		else
		return 0;
}





void check(queue<cord> &qu)
{
		c=qu.front();
		qu.pop();
		int i,j;
		i=c.a;
		j=c.b;
		if(l(i-1,j))
		{
				if((abs(a[i-1][j]-a[i][j])<=10)&&
					 (mark[i-1][j]==0))
				{
						mark[i-1][j]=1;
						dist[i-1][j]=dist[i][j]+1;
						c=(cord){i-1,j};
						qu.push(c);
				}
		}
		if(l(i+1,j))
		{
				if((abs(a[i+1][j]-a[i][j])<=10)&&
					 (mark[i+1][j]==0))
				{
						mark[i+1][j]=1;
						dist[i+1][j]=dist[i][j]+1;
						c=(cord){i+1,j};
						qu.push(c);
				}
		}
		if(l(i,j-1))
		{
				if((abs(a[i][j-1]-a[i][j])<=10)&&
					 (mark[i][j-1]==0))
				{
						mark[i][j-1]=1;
						dist[i][j-1]=dist[i][j]+1;
						c=(cord){i,j-1};
						qu.push(c);
				}
		}	
		if(l(i,j+1))
		{
				if((abs(a[i][j+1]-a[i][j])<=10)&&
					 (mark[i][j+1]==0))
				{
						mark[i][j+1]=1;
						dist[i][j+1]=dist[i][j]+1;
						c=(cord){i,j+1};
						qu.push(c);
				}
		}	
}	
		
		
		

		
int main()
{
		//int a[n][n];
		for(int i=0;i<n;i++)
		{
				for(int j=0;j<n;j++)
				{
						cin>>a[i][j];
				}
		}
		//int mark[n][n];
		for(int i=0;i<n;i++)
		{
				for(int j=0;j<n;j++)
				{
						mark[i][j]=0;
						dist[i][j]=0;
				}
		}
		mark[0][0]=1;
		dist[0][0]=0;
		std::queue<cord> qu;
		c=(cord){0,0};
		qu.push(c);
		while(!qu.empty())
		{
				check(qu);		
		}		
		for(int i=0;i<n;i++)
		{
				for(int j=0;j<n;j++)
				{
						cout<<dist[i][j]<<'\t';
				}
				cout<<endl;
		}
		system("pause");
		return 0;
}



/*--------------------------------------------------------------------

Finding the shortest route
What if, in addition, we want to compute the shortest route from (1,1) to (N,N)?

An efficient way to maintain and process marked positions is to use a queue (first-in-first-out collection).

Initially, mark the starting position and add it to the queue.
In each round:

(Assume we have a queue of marked positions whose neighbours are yet to be explored.)
Extract the first element from the queue. Mark all unmarked reachable neighbours (whose height difference is within the bound) and insert them into the queue.
Repeat this till the queue becomes empty (there are no more marked positions to examine).
For instance:

            70    80    80    70

            60    30    20    30

            50    40    10    50

            45    60    20    10
      
Mark (1,1) and start with Queue = {(1,1)}
Extract (1,1) from head of queue, mark its reachable neighbours and add them to the Queue:
Queue is now {(1,2),(2,1)}
Extract (1,2) from head of queue, mark its reachable neighbours and add them to the Queue:
Queue is now {(2,1),(1,3)}
Extract (2,1) from head of queue, mark its reachable neighbours and add them to the Queue:
Queue is now {(1,3),(3,1)}
Extract (1,3) from head of queue, mark its reachable neighbours and add them to the Queue:
Queue is now {(3,1),(1,4)}
Extract (3,1) from head of queue, mark its reachable neighbours and add them to the Queue:
Queue is now {(1,4),(3,2),(4,1)}
…
Let us examine the order in which positions get marked. When we explore a position that is k steps away from the starting position, its neighbours are k+1 steps away and get added later in the queue. By maintaining the marked positions in the queue, we guarantee that positions are marked in increasing order of their distance from the source. We can also record the distance with each node as we visit it.

This method of exploration, in which we explore all neighbours level by level, is called breadth first search.

The earlier recursive formulation (using "check(i,j)") is depth first search. We pick a neigbhour to explore, then explore its neighbours, … till we can make no progress, and then we come back to process the next unmarked neighbour of the first node.

Here is a more precise formulation of breadth first search:

        Mark[(i,j)] = 0 for all (i,j)

        Mark[(1,1)] = 1;
        Dist[(1,1)] = 0;
        Insert (1,1) into the queue;

        BFS {
           while (queue is not empty) {
             v = head of queue;
             for each unmarked neighbour w of v {
               Mark[w] = 1;
               Dist[w] = Dist[v] + 1;
               Insert w into the queue;
             }
           }
        }
*/
