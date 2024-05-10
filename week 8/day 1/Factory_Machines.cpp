#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n,t;
    cin>>n>>t;
    vector <int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    
    auto ok=[&](long long int m)
    {
        long long total=0;
        for(int i=0;i<n;i++)
        {
            total+=m/v[i];
            if(total>=t)
            {
                return true;
            }
        }
        return false;
    };

    long long int l=1,r=1e18,mid,ans;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(ok(mid))
        {
            ans=mid;
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }

    cout<<ans<<endl;
    return 0;
}