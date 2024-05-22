#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

const ll mod=1e9+7;

ll power(ll base,ll n)
{
    ll result=1;
    while(n)
    {
        if(n%2==1)
        {
            result=(result*base)%mod;
            n--;
        }
        else
        {
            base=(base*base)%mod;
            n/=2;
        }
    }
    return result;
}

void solve()
{
    ll n,k;
    cin>>n>>k;
    vector <int> v;
    while(k)
    {
        if(k%2==0) v.push_back(0);
        else v.push_back(1);
        k/=2;
    }
    ll ans=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==1)
        {
            ans+=power(n,i);
        }
        ans%=mod;
    }
    cout<<ans<<endl;
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