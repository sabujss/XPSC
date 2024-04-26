#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    vector <ll> v(n);
    ll sum=-1;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if((v[i]&k)==k)
        {
            sum&=v[i];
        }
    }
    if(sum==k)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
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