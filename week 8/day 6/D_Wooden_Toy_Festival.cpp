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
        int n;
        cin>>n;
        vector <int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());

        auto ok=[&](int mid)
        {
            int l=0,cnt=1;
            for(int r=0;r<n;r++)
            {
                if((v[r]-v[l])>2*mid)
                {
                    cnt++;
                    l=r;
                }
            }
            return cnt<=3;
        };

        int l=0,r=1e9,mid,ans=0;
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