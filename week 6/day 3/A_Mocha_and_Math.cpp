#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector <int> v(n);
    int ans=-1;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        ans&=v[i];
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