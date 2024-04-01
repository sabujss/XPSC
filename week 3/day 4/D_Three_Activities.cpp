#include <bits/stdc++.h>
#define ll long long
using namespace std;

 
bool cmp(pair<ll, ll> a, pair<ll, ll> b)
{
    return a.first > b.first;
}

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector <ll> a(n),b(n),c(n);
        vector <pair<ll,ll>> x,y,z;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            x.push_back({a[i],i});
        }
        for(ll i=0;i<n;i++)
        {
            cin>>b[i];
            y.push_back({b[i],i});
        }
        for(ll i=0;i<n;i++)
        {
            cin>>c[i];
            z.push_back({c[i],i});
        }
        sort(x.begin(),x.end(),cmp);
        sort(y.begin(),y.end(),cmp);
        sort(z.begin(),z.end(),cmp);
        ll res=0; 
        
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                for(int k=0;k<3;k++)
                {
                    if(x[i].second != y[j].second && y[j].second != z[k].second && z[k].second != x[i].second)
                    {
                        ll total=x[i].first+y[j].first+z[k].first;
                        res=max(res,total);
                    }
                }
            }
        }

        cout<<res<<endl;
    } 
    return 0;
}