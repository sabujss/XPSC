#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve()
{
    ll n,q;
    cin>>n>>q;
    vector <ll> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector <pair<ll,ll>> qu(q);
    for(int i=0;i<q;i++)
    {
        cin>>qu[i].first;
        qu[i].second=i;
    }
    sort(qu.begin(),qu.end());
    vector <ll> ans(q);
    ll l=0,sum=0;
    for(int i=0;i<q;i++)
    {
        while(l<n && v[l]<=qu[i].first)
        {
            sum+=v[l];
            l++;
        }
        ans[qu[i].second]=sum;
    }
    for(auto x:ans)
    {
        cout<<x<<" ";
    }
    cout<<endl;
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