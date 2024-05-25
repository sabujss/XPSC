#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    vector <ll> v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }
    map<pair<ll,ll>,ll> ab;
    map<pair<ll,ll>,ll> bc;
    map<pair<ll,ll>,ll> ca;
    map<vector<ll>,ll> ab1;
    map<vector<ll>,ll> bc1;
    map<vector<ll>,ll> ca1;
    ll ans=0;
    for(ll i=0;i<n-2;i++)
    {
        ll a=v[i];
        ll b=v[i+1];
        ll c=v[i+2];
        ab[{a,b}]+=1;
        bc[{b,c}]+=1;
        ca[{c,a}]+=1;
        ab1[{a,b,c}]+=1;
        bc1[{b,c,a}]+=1;
        ca1[{c,a,b}]+=1;
        ans+=ab[{a,b}]-ab1[{a,b,c}];
        ans+=bc[{b,c}]-bc1[{b,c,a}];
        ans+=ca[{c,a}]-ca1[{c,a,b}];
    }
    cout<<ans<<endl;

}

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}