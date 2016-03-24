#include<iostream>
using namespace std;

unsigned long long CombinationsIter(unsigned long long iN, unsigned long long iR) {
    if (iR < 0 || iR > iN) {
        return 0;
    }
    unsigned long long iComb = 1;
    unsigned long long i = 0;
    while (i < iR) {
        ++i;
        iComb *= iN - i + 1;
        iComb /= i;
    }
    return iComb;
}

int main()
{
    unsigned long long tes;
    cin>>tes;
    for(unsigned long long u=1;u<=tes;u++)
    {
            unsigned long long n, k;
            cin>>n>>k;
            cout<<CombinationsIter(n-1,k-1)<<endl;
    }
    return 0;
}
