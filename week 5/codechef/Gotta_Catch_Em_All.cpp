#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,x,y;
    cin>>n>>x>>y;
    vector <int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=min((v[i]*x),y);
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