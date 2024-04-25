#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    vector <ll> v(n);
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        sum|=v[i];
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