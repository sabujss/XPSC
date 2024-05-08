#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n,q;
    cin>>n>>q;
    vector <ll> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.rbegin(),a.rend());
    vector <ll> pre(n,0);
    pre[0]=a[0];
    for(int i=1;i<n;i++)
    {
        pre[i]=pre[i-1]+a[i];
    }
    while(q--)
    {
        ll x;
        cin>>x;
        if(x>pre[n-1])
        {
            cout<<-1<<endl;
            continue;
        }
        auto it=lower_bound(pre.begin(),pre.end(),x);
        int ans=(it-pre.begin());
        // int l=0,r=n-1,idx=-1;
        // while(l<=r)
        // {
        //     int mid=(l+r)/2;
        //     if(pre[mid]>=x)
        //     {
        //         idx=mid;
        //         r=mid-1;
        //     }
        //     else
        //     {
        //         l=mid+1;
        //     }
        // }
        cout<<ans+1<<endl;
    }
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