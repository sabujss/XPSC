#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll left_bit_pos(ll k)
{
    ll cnt=0;
    while(k>0)
    {
        cnt++;
        k=k>>1;
    }
    return cnt;
}

void solve()
{
    ll n;
    cin>>n;
    vector <ll> v(n);
    vector <ll> bit_pos(n);
    map <ll,ll> mp;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        bit_pos[i]=left_bit_pos(v[i]);
        mp[bit_pos[i]]++;
    }
    ll total=0;
    for(auto it:mp)
    {
       ll p=it.second;
       total+=(p*(p-1))/2;
    }
    cout<<total<<endl;
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