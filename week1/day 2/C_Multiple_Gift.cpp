#include <iostream>
#define ll long long
using namespace std;

int main() 
{
    ll X,Y;
    cin>>X>>Y;
    int cnt=1;
    ll crnt=X;
    while(crnt*2<=Y)
    { 
        crnt*=2;
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
