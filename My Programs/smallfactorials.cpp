#include<iostream>
using namespace std;
int main()
{
    int tes,n;
    unsigned long long tc=1;
    cin>>tes;
    for(int a=1;a<=tes;a++)
    {
            cin>>n;
            tc=1;
            while(n)
            {
                    tc*=n;
                    n--;
            }
    cout<<tc<<endl;
    }
    system("pause");
    return 0;
}
