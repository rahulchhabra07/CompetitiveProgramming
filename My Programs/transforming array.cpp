#include<iostream>
#include<cstdlib>
using namespace std;

void quicksort(int* input, int p, int r);
int partition(int* input, int p, int r);



int main()
{
    int tes;
    cin>>tes;
    for(int u=1;u<=tes;u++)
    {
            int n,k;
            cin>>n>>k;
            k++;
            int ar[n];
            for(int i=0;i<n;i++)
            {
                    cin>>ar[i];
                    ar[i]%=k;
            }
            quicksort(ar,n-1,0);
            if((ar[1]==ar[n-1])||(ar[0]==ar[n-2]))
            {
                                                  cout<<"YES";
            }
            else
            {
                cout<<"NO";
            }
            cout<<endl;
    }
    return 0;
}
            
            
 
 
 
 
 
 
            
int partition(int* input, int p, int r)
{
    int pivot = input[r];

    while ( p < r )
    {
        while ( input[p] < pivot )
            p++;

        while ( input[r] > pivot )
            r--;

        if ( input[p] == input[r] )
            p++;
        else if ( p < r )
        {
            int tmp = input[p];
            input[p] = input[r];
            input[r] = tmp;
        }
    }

    return r;
}

// The quicksort recursive function
void quicksort(int* input, int p, int r)
{
    if ( p < r )
    {
        int j = partition(input, p, r);        
        quicksort(input, p, j-1);
        quicksort(input, j+1, r);
    }
}

            
            
