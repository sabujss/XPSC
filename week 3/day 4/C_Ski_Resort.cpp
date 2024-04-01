#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,q;
        cin>>n>>k>>q;
        vector <ll> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        ll cons=0;
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]<=q)
            {
                cons++;
                if(i==n-1 || v[i+1]>q)
                {
                    if(cons>=k)
                    {
                        ll x=cons-k+1LL;
                        ans+=(x*(x+1LL))/2LL;
                    }
                    cons=0;
                }
            }
        }
        cout<<ans<<endl;
    } 
    return 0;
}