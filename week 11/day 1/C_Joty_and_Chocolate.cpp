#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

ll gcd(ll a,ll b)
{
    return __gcd(a,b);
}
ll lcm(ll a, ll b)
{
    return ((a/gcd(a,b))*b);
}

void solve()
{
    ll n,a,b,p,q,ans=0,same;
    cin>>n>>a>>b>>p>>q;
    
    same=n/lcm(a,b);
    ans+=(n/a)*p;
    ans+=(n/b)*q;
    ans-=(same*(p+q));
    ans+=(same*(max(p,q)));
    cout<<ans<<endl;
}

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    
    solve();
    return 0;
}