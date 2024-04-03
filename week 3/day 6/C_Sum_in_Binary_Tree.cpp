#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    ll sum=0;
    while(n>0)
    {
        sum+=n;
        n/=2LL;
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