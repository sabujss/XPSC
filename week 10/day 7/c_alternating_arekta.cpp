#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    vector <ll> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll ans=0,i=0;
    set <int> s;
    while(i<n)
    {
        if(a[i]>0)
        {
            while(i<n && a[i]>0)
            {
                s.insert(a[i]);
                i++;
            }
        }
        else
        {
            while(i<n && a[i]<0)
            {
                s.insert(a[i]);
                i++;
            }
        }
        auto it=s.rbegin();
        ans+=*it;
        s.clear();
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