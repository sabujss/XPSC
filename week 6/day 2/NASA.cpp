#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

vector <ll> palin;
void palindrom()
{
    ll mx=1<<15;
    for(ll i=0;i<mx;i++)
    {
        string s=to_string(i);
        string rs=s;
        reverse(s.begin(),s.end());
        if(s==rs)
        {
            palin.push_back(i);
        }
    }

}

void solve()
{
    int n;
    cin>>n;
    vector <ll> v(n);
    unordered_map <ll,ll> mp;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        mp[v[i]]++;
    }
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<palin.size();j++)
        {
            if((v[i]^palin[j])<=v[i]) continue;
            if(mp.find(v[i]^palin[j])!=mp.end())
            {
                ans+=mp[v[i]^palin[j]];
            }
        }
    }

    for(auto x:mp)
    {
        ans+=(1LL*(x.second)*(x.second+1))/2LL;
    }
    cout<<ans<<endl;

}

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    
    palindrom();
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    } 
    return 0;
}