#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int m=(n*(n-1))/2;
    vector <int> a(n),b(m);
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    sort(b.begin(),b.end());
    int cnt=1, idx=0;
    int cng=n-cnt;
    while(n-cnt>0)
    {
        a[idx]=b[cng-1];
        idx++;
        cnt++;
        cng+=n-cnt;
    }
    a[n-1]=1e9;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
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