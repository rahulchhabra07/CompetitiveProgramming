#include<iostream>
using namespace std;
void bsort( int ary[], int size )

{

    bool swap;

    do

    {

        swap = false;

        for( int i = 1; i < size; ++i )

        {

            if( ary[i-1] > ary[i] )

            {

                int tmp = ary[i];

                ary[i] = ary[i-1];

                ary[i-1] = tmp;

                swap = true;

            }

        }

        printIntAry( ary, size );

        -- size;

    }

    while( swap );

}
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
            cin>>ar[i];
    }
    bsort(ar,n0;
    for(int i=0;i<n;i++)
    {
            cout<<ar[i];
    }
    return 0;
}        
