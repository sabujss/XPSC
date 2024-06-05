#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll lcm(ll a,ll b)
{
    return (a/__gcd(a,b))*b;
}

void solve()
{
    ll n;
    cin>>n;
    ll ans;
    for(ll i=1;i*i<=n;i++)
    {
        if(n%i==0 && lcm(i,n/i)==n)
        {
            ans=i;
        }
    }
    cout<<ans<<" "<<n/ans<<endl;
}

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    
    solve();
    return 0;
}