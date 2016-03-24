#include<iostream>
using namespace std;
int main()
{
    cout<<"How are you???\n";
    char ans[100];
    cin>>ans;
    if(!strcmp("Huh",ans))
    {
                  cout<<"\nKhaane pe kaha chalna hai???\n";
    }
    cin>>ans;
    return 0;
}
