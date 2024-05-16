#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n,a,b;
    cin>>n>>a>>b;

    auto ok=[&](int mid)
    {
        int x=0;
        x+=a/mid;
        x+=b/mid;
        return x>=n;
    };
    int l=1,r=min(a,b),mid,ans;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(ok(mid))
        {
            ans=mid;
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    } 
    cout<<ans<<endl;
    return 0;
}