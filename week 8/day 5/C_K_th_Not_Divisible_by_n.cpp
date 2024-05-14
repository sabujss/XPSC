#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;

        auto ok= [&](long long mid)
        {
            return (mid-(mid/n))>=k;

        };
        
        long long l=1,r=1e18,mid,ans=0;
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
    } 
    return 0;
}