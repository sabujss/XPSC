#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve()
{
    ll a,b;
    cin>>a>>b;
    if(b==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl<<a<<" "<<a*b<<" "<<(b+1)*a<<endl;
    }
}

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    } 
    return 0;
}