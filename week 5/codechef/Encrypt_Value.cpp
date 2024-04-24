#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    const ll MOD=1e9 + 7;
    ll n;
    cin>>n;
    vector <ll> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll sum=v[0];
    for(int i=1;i<n;i++)
    {
        if(v[i]==0 || v[i]==1 || (sum<=1 && v[i]>1))
        {
            sum=(sum+v[i])%MOD;
        }
        else
        {
            sum=(sum*v[i])%MOD;
        }
    }
    cout<<sum<<endl;
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