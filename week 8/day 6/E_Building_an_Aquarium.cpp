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
        long long int n,x;
        cin>>n>>x;
        vector <long long int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }

        auto ok=[&](long long int mid)
        {
            long long int mul=n*mid;
            long long int sum=0;
            for(int i=0;i<n;i++)
            {
                sum+=min(v[i],mid);
            }
            return (mul-sum)<=x;
        };


        long long int l=1,r=2e9,mid,ans=0;
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
    } 
    return 0;
}