#include <bits/stdc++.h>
#define ll long long
#define endl "\n" 
using namespace std;

void solve()
{
    int n,c;
    cin>>n>>c;
    vector <ll> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        v[i]+=(i+1);
    }
    ll sum=0;
    ll ans=0;
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        if(sum+v[i]>c)
        {
            break;
        }
        else
        {
            sum+=v[i];
            ans++;
        }
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