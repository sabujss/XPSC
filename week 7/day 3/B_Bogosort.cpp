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
    sort(v.rbegin(),v.rend());
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
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