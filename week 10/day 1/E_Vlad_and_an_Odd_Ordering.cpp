#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve()
{
    ll n,k;
    cin>>n>>k;
    for(int i=1; ;i*=2)
    {
        ll x=n/i;
        ll y=(x+1)/2;
        if(k<=y)
        {
            ll ans=k+(k-1);
            cout<<ans*i<<endl;
            return;
        }
        else
        {
            k-=y;
        }
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