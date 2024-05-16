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

        auto ok=[&](int mid)
        {
            multiset <int> s;
            for(auto x:v)
            {
                s.insert(x);
            }

            for(int i=1;i<=mid;i++)
            {
                if(s.empty()) return false;
                int req=mid-i+1;
                auto it=s.upper_bound(req);
                if(it==s.begin()) return false;
                it--;
                s.erase(it);

                if(!s.empty())
                {
                    it=s.begin();
                    int v=(*it);
                    v+=req;
                    s.erase(it);
                    s.insert(v);
                }
            }
            return true;
        };

        int l=0,r=n,mid,ans;
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