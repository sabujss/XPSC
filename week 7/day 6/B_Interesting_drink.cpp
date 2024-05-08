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
    sort(v.begin(),v.end());
    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        // auto it=upper_bound(v.begin(),v.end(),x);
        // int ans=(it-v.begin());
        // cout<<ans<<endl;
        int l=0,r=n-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(x>=v[mid])
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }

        }
        cout<<l<<endl;
    }
}

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    
    
    
    solve();
    return 0;
}