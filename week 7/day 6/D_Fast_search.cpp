#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector <int> v(n);
    for(int i=0; i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int k;
    cin>>k;
    for(int i=0;i<k;i++)
    {
        int x, y;
        cin >> x >> y;
        auto low=lower_bound(v.begin(),v.end(),x);
        auto high=upper_bound(v.begin(),v.end(),y);
        int ans=(high-v.begin())-(low-v.begin());
        cout<<ans<<" ";
    }
    cout<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    return 0;
}
