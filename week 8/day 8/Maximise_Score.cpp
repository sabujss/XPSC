#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int ans=INT_MAX;
    ans=min(ans,abs(v[0]-v[1]));
    ans=min(ans,abs(v[n-1]-v[n-2]));
    for(int i=1;i<n-1;i++)
    {
        ans=min(ans,max(abs(v[i]-v[i+1]),abs(v[i]-v[i-1])));
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