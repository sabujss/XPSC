#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    vector <int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int odd=0;
    for(int i=0;i<k;i++)
    {
        if(v[i]%2!=0)
        {
            odd++;
        }
    }
    int ans=0;
    if(odd>0)
    {
        ans++;
    }
    for(int i=k;i<n;i++)
    {
        if(v[i-k]%2!=0) odd--;
        if(v[i]%2!=0) odd++;
        if(odd>0) ans++;
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