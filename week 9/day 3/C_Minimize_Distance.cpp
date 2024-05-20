#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    vector <ll> pos;
    vector <ll> neg;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        if(x<0)
        {
            neg.push_back(abs(x));
        }
        else
        {
            pos.push_back(x);
        }
    }
    sort(pos.rbegin(),pos.rend());
    sort(neg.rbegin(),neg.rend());
    ll ans=0;
    for(int i=0;i<pos.size();i=i+k)
    {
        ans+=pos[i]*2;
    }
    for(int i=0;i<neg.size();i=i+k)
    {
        ans+=neg[i]*2;
    }
    if(!pos.empty() && !neg.empty())
    {
        cout<<ans-max(pos[0],neg[0])<<endl;
    }
    else if(pos.empty() && !neg.empty())
    {
        cout<<ans-neg[0]<<endl;
    }
    else if(!pos.empty() && neg.empty())
    {
        cout<<ans-pos[0]<<endl;
    }
    else
    {
        cout<<ans<<endl;
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