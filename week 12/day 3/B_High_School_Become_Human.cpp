#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll x,y;
    cin>>x>>y;
    double a=y*log(x);
    double b=x*log(y);
    if(a==b)
    {
        cout<<"="<<endl;
    }
    else if(a>b)
    {
        cout<<">"<<endl;
    }
    else
    {
        cout<<"<"<<endl;
    }
}

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    
    solve(); 
    return 0;
}