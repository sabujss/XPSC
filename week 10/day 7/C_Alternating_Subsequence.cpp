#include <bits/stdc++.h>
using namespace std;

bool check(int x)
{
    return x>0;
}

void solve()
{
    int n;
    cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    long long int ans=0;
    for(int i=0;i<n; )
    {
        int j=i;
        int mx=v[i];
        while(j<n && check(v[i])== check(v[j]))
        {
            mx=max(v[j],mx);
            j++;
        }
        i=j;
        ans+=mx;
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